/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergMe.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:29:51 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 21:07:57 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergMe.hpp"


PmergMe::PmergMe( void ) {
}

PmergMe::~PmergMe( void ) {
	
}


PmergMe	&PmergMe::operator=( PmergMe const &copy ) {
	(void)copy;
	return (*this);
}


PmergMe::PmergMe( PmergMe const &copy ) {
	*this = copy;
}


void    PmergMe::fill_container(int ac,char **av) {
	for (int i = 1; i < ac; i++) {
        this->vec.push_back(atoi(av[i]));
		this->deq.push_back(atoi(av[i]));
    }
}


void    PmergMe::show_container() {
	for(std::vector<int>::iterator it = this->vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	for(std::deque<int>::iterator it = this->deq.begin(); it != deq.end(); it++) {
		std::cout << *it << " ";
	}
}

void	PmergMe::trie_vec() {
	for(std::vector<int>::iterator it = this->vec.begin();it != this->vec.end(); it++) {

		if (it + 1 != this->vec.end()) {
			for(std::vector<int>::iterator it2 = it + 1; it2 != this->vec.end(); it2++) {
				if (*it2 < *it) {
					std::cout << "jsuis la " << *it2 << " < " << *it << std::endl;
					//std::vector<int>::iterator tp = it;
					vec.insert(it, *it2);
					// tp = it2;
					if (it2 + 1 != this->vec.end() )
						vec.erase(it2 + 1);
					std::cout << "\nlalalal\n";
					this->show_container();
				}
			}
		}
	}
}