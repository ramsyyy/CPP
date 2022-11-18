/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:41:07 by raaga             #+#    #+#             */
/*   Updated: 2022/11/17 17:17:14 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
public :
	Cat( void );
	~Cat( void );
	Cat	&operator=( Cat const &copy );
	Cat( Cat const &copy );

	void makeSound( void ) const ;
	
private : 
	Brain *_brain;
};

#endif