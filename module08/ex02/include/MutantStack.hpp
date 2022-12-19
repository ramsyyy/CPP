/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:45:58 by raaga             #+#    #+#             */
/*   Updated: 2022/12/14 16:18:39 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> , public std::iterator<std::forward_iterator_tag, T>{
public :
	MutantStack<T>( void ) {
		return ;
	}
	~MutantStack( void ) {
		return ;
	}
	MutantStack	&operator=( MutantStack const &copy ) {
		this->c = copy.c;
		return (*this);
	}
	MutantStack( MutantStack const &copy ) {
		(*this) = copy;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin( void ) {
		return (this->c.begin());
	}

	iterator end( void ) {
		return (this->c.end());
	}


	
	private :
};

#endif