/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:31:39 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 16:50:21 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

rpn::rpn() {}

rpn::rpn(std::string str) : str(str) {}

rpn::~rpn() {}

rpn &rpn::operator=(rpn const &copy) {
    this->pile = copy.pile;
    this->str = copy.str;
    return (*this);
}

std::stack<int> rpn::get_pile() {
    return (this->pile);
}

std::string rpn::get_str() {
    return (this->str);
}

rpn::rpn(rpn const &copy) {
    *this = copy;
}


int rpn::pars_string() {
    int first_cmd = 0;
    int i = 0;
    
    for (std::string::iterator it = this->str.begin(); it != this->str.end(); it++) {
        if (((*it < '0' || *it > '9') && *it != ' ') && first_cmd == 0) {
           i++;
            for (std::string::iterator it2 = it - 1; it2 != this->str.begin(); it2--) {
                if (*it2 != ' ' && (*it2 < '0' || *it2 > '9')  ) 
                    return(0);
                if (*it2 >= '0' || *it2 <= '9')
                    first_cmd++;
            }
            if (first_cmd < 2) 
                return(0);
        }
        if (*it >= '0' && *it <= '9')
            first_cmd++;
        else if (*it != ' ') 
            i++;
    }
    if (i != first_cmd - 1) return (0);
    return (1);
}

void    rpn::calcul(void) {
    for (std::string::iterator it = this->str.begin(); it != this->str.end(); it++) {
        if ((*it-48 >= 0 && *it-48 <= 9) || *it == ' ' ) {
            if (*it-48 >= 0 && *it-48 <= 9)
                this->pile.push(*it - 48);
            continue;
        }
        else {
            if (this->pile.size() < 2) {
                std::cout << "error calcul impossible" << std::endl;
                pile.~stack();
                exit(0);
            }
            int x = this->pile.top();
            this->pile.pop();
            int y = this->pile.top();
            this->pile.pop();
            if (*it == '+') 
                this->pile.push(y + x);
            else if (*it == '-')
                this->pile.push(y - x);
            else if (*it == '/')
                this->pile.push(y / x);
            else if (*it == '*')
                this->pile.push(y * x); 
        }
    }
    while (!this->pile.empty()) {
        std::cout << this->pile.top() << " ";
        this->pile.pop();
    }
}