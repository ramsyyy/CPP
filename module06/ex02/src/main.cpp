/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:17:34 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 18:09:53 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include <stdlib.h>

Base    *generate( void ) {
    int i = rand() % 3 + 1;
    if (i == 1) return (new A);
    else if (i == 2) return (new B);
    else return (new C);
}

void    identify(Base *p) {
    try {
        A a = dynamic_cast<A &>(*p);
        std::cout << "type : A" << std::endl;
    }
    catch (std::exception &e) {
        try {
            B b = dynamic_cast<B &>(*p);
            std::cout << "type : B" << std::endl;
        }
        catch (std::exception &e) {
            try {
                C c = dynamic_cast<C &>(*p);
                std::cout << "type : C" << std::endl;
            }
            catch (std::exception &e) {
                return ;
            }
        }
        
    }
}

void    identify(Base &p) {
    try {
        A a = dynamic_cast<A &>(p);
        std::cout << "type : A" << std::endl;
    }
    catch (std::exception &e) {
        try {
            B b = dynamic_cast<B &>(p);
            std::cout << "type : B" << std::endl;
        }
        catch (std::exception &e) {
            try {
                C c = dynamic_cast<C &>(p);
                std::cout << "type : C" << std::endl;
            }
            catch (std::exception &e) {
                return ;
            }
        }
        
    }
}

int main() {
    
	Base *base;
    
    srand(time(NULL));
	std::cout << "------Ptr Tests------" << std::endl;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	base = generate();
	identify(base);
	delete base;
	std::cout << "------Ref Tests------" << std::endl;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
	base = generate();
	identify(*base);
	delete base;
}