/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:04:01 by raaga             #+#    #+#             */
/*   Updated: 2022/11/02 17:00:38 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed( void );
        Fixed( Fixed const &copie );
        ~Fixed( void );

        Fixed   operator=( Fixed const &copie ) const;
        int     getRawBits( void ) const ;
        void    setRawBits( int const raw ) ;
    
    private:
        int _nb;
        static int const  _nbStatic = 8;    
    
};

#endif