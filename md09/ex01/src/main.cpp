/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:32:22 by raaga             #+#    #+#             */
/*   Updated: 2023/03/08 19:23:21 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <stack>

int pars_string(std::string str) {
    int first_cmd = 0;
    int i = 0;
    
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        if (((*it < '0' || *it > '9') && *it != ' ') && first_cmd == 0) {
           i++;
            for (std::string::iterator it2 = it - 1; it2 != str.begin(); it2--) {
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

int main(int ac, char **argv) {

    std::stack<int> pile;
    std::string str;

    
    if (ac != 2)
        return 0;
    str = argv[1];
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        if (*it != ' ' && *it != '+' && *it != '-' &&  *it != '/' && *it != '*' && (*it < '0' ||  *it > '9'))
        {    
            std::cout << "error : " << *it << std::endl;
            return (0);
        }
    }
    if (pars_string(str) == 0) {
        std::cout << "error calcul impossible" << std::endl;
        return(0);
    }
    for (std::string::iterator it = str.begin(); it != str.end(); it++) {
        if ((*it-48 >= 0 && *it-48 <= 9) || *it == ' ' ) {
            if (*it-48 >= 0 && *it-48 <= 9)
                pile.push(*it - 48);
            continue;
        }
        else {
            if (pile.size() < 2) {
                std::cout << "error calcul impossible" << std::endl;
                return(0);
            }
            int x = pile.top();
            pile.pop();
            int y = pile.top();
            pile.pop();
            if (*it == '+') 
                pile.push(y + x);
            else if (*it == '-')
                pile.push(y - x);
            else if (*it == '/')
                pile.push(y / x);
            else if (*it == '*')
                pile.push(y * x); 
        }
    }
    while (!pile.empty()) {
        std::cout << pile.top() << " ";
        pile.pop();
    }
    return (0);
}