/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:09 by raaga             #+#    #+#             */
/*   Updated: 2022/11/03 17:14:38 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        
        Fixed( void );
        Fixed   &operator=( Fixed const &copie ) ;
        Fixed( Fixed const &copie );
        Fixed( int const integer ) ;
        Fixed( float const floater ) ;
        ~Fixed( void );

        float toFloat( void ) const ;
        int   toInt( void ) const ;
        int     getRawBits( void ) const ;
        void    setRawBits( int const raw ) ;
    
    private:
        int _nb;
        static int const  _nbStatic = 8;    
    
};

std::ostream & operator<<(std::ostream & o , Fixed const &copie ) ;

#endif