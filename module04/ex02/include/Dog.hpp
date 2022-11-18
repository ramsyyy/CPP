/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:33:10 by raaga             #+#    #+#             */
/*   Updated: 2022/11/17 17:17:04 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
public :
	Dog( void );
	~Dog( void );
	Dog	&operator=( Dog const &copy );
	Dog( Dog const &copy );

	void makeSound( void ) const ; 
private : 
	Brain *_brain;

};

#endif