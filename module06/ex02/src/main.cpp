/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:17:34 by raaga             #+#    #+#             */
/*   Updated: 2022/12/01 17:03:33 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include <stdlib.h>

Base    *generate( void ) {
    srand(time(NULL));
    int i = rand() % 3 + 1;
    if (i == 1) return (dynamic_cast<Base *>(new A));
    else if (i == 2) return (dynamic_cast<Base *>(new B));
    else return (dynamic_cast<Base *>(new C));
}

void    identify(Base *p) {
    try {
        A a = dynamic_cast<A &>(*p);
        std::cout << "type : A" << std::endl;
    }
    catch (std::bad_cast &e) {
        try {
            B b = dynamic_cast<B &>(*p);
            std::cout << "type : B" << std::endl;
        }
        catch (std::bad_cast &e) {
            try {
                C c = dynamic_cast<C &>(*p);
                std::cout << "type : C" << std::endl;
            }
            catch (std::bad_cast &e) {
                return ;
            }
        }
        
    }
}

void    identify2(Base &p) {
    try {
        A a = dynamic_cast<A &>(p);
        std::cout << "type : A" << std::endl;
    }
    catch (std::bad_cast &e) {
        try {
            B b = dynamic_cast<B &>(p);
            std::cout << "type : B" << std::endl;
        }
        catch (std::bad_cast &e) {
            try {
                C c = dynamic_cast<C &>(p);
                std::cout << "type : C" << std::endl;
            }
            catch (std::bad_cast &e) {
                return ;
            }
        }
        
    }
}

int main() {
    
    Base *Salut;


    Salut = generate();
    identify(Salut);
    identify2(*Salut);
    
    delete Salut;
    return (0);
}