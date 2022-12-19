/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:43:51 by raaga             #+#    #+#             */
/*   Updated: 2022/12/14 16:30:21 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"
#include <list>

int main() {
    {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    }

    std::cout << "LIST !!!!!" << std::endl;
    
    std::list<int> salut;
    salut.push_back(5);
    salut.push_back(17);
    std::cout << salut.back() << std::endl;
    salut.pop_back();
    std::cout << salut.size() << std::endl;
    salut.push_back(3);
    salut.push_back(5);
    salut.push_back(737);
    //[...]
    salut.push_back(0);

    std::list<int>::iterator it = salut.begin();
    std::list<int>::iterator ite = salut.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    //std::stack<int> s(salut);
    return (0);
}