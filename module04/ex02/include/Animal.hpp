/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:54:25 by raaga             #+#    #+#             */
/*   Updated: 2022/11/18 18:21:18 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{
public :
	Animal( void );
	virtual ~Animal( void );
	Animal	&operator=( Animal const &copy );
	Animal( Animal const &copy );

	std::string getType( void ) const;
	virtual void makeSound( void ) const = 0;
	
protected : 
	std::string _type;
};

#endif