/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:20:22 by raaga             #+#    #+#             */
/*   Updated: 2022/11/11 22:26:08 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
    public :
        Animal( void );
        Animal &operator( Animal const &copy );
        Animal( Animal const &copy);
        
        ~Animal( void );
    
    protected :
        std::string type;
    
};

#endif