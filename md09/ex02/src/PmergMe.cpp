/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergMe.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:29:51 by raaga             #+#    #+#             */
/*   Updated: 2023/03/23 23:52:10 by raaga            ###   ########.fr       */
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

// void	PmergMe::trie_vec() {
// 	for(std::vector<int>::iterator it = this->vec.begin();it != this->vec.end(); it++) {
// 		for(std::vector<int>::iterator it2 = it + 1; it2 != this->vec.end(); it2++) {
// 			if (*it2 < *it) {
// 				int tmp = *it2;
// 				vec.erase(it2);
// 				vec.insert(it, tmp);
// 			}
// 		}
// 	}
// }

void	PmergMe::trie_vec() {
	for(size_t i = 0; i != this->vec.size(); i++) {
		for(size_t y = i + 1; y < this->vec.size(); y++) {
			if (this->vec[y] < this->vec[i]) {
				int tmp = this->vec[i];

				this->vec[i] = this->vec[y];
				this->vec[y] = tmp;
				// vec.erase(it2);
				// vec.insert(it, tmp);
			}
		}
	}
}




// void	PmergMe::tire_deq() {
// 	for(std::deque<int>::iterator it = this->deq.begin();it != this->deq.end(); it++) {
// 		for(std::deque<int>::iterator it2 = it + 1; it2 != this->deq.end(); it2++) {
// 			if (*it2 < *it) {
// 				int tmp = *it2;
// 				//deq.erase(it2);
// 				deq.insert(it, tmp);
// 			}
// 		}
// 	}
// }

void    PmergMe::tire_deq(void) {
	for(size_t i = 0; i != this->deq.size(); i++) {
		for(size_t y = i + 1; y < this->deq.size(); y++) {
			if (this->deq[y] < this->deq[i]) {
				int tmp = this->deq[i];

				this->deq[i] = this->deq[y];
				this->deq[y] = tmp;
				// vec.erase(it2);
				// vec.insert(it, tmp);
			}
		}
	}
}