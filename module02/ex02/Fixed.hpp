/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:17:31 by raaga             #+#    #+#             */
/*   Updated: 2022/11/04 15:44:54 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        
        Fixed( void );
        Fixed( Fixed const &copie );
        Fixed( int const integer ) ;
        Fixed( float const floater ) ;
        ~Fixed( void );
        
        Fixed   &operator=( Fixed const &copie ) ;
        Fixed   operator+( Fixed const &copie ) const;
        Fixed   operator-( Fixed const &copie ) const;
        Fixed   operator*( Fixed const &copie ) const;
        Fixed   operator/( Fixed const &copie ) const;
        
        Fixed   operator++( void );
        Fixed   operator++( int );
        Fixed   operator--( void );
        Fixed   operator--( int );

        static Fixed   &min(Fixed &a, Fixed &b);
        static Fixed   const &min(Fixed const &a, Fixed const &b) ;
        static Fixed   &max(Fixed &a, Fixed &b);
        static Fixed   const &max(Fixed const &a, Fixed const &b) ;
        
        bool    operator>( Fixed const &copie )  const;
        bool    operator>=( Fixed const &copie )  const;
        bool    operator<( Fixed const &copie ) const;
        bool    operator<=( Fixed const &copie ) const;
        bool    operator==( Fixed const &copie ) const;
        bool    operator!=( Fixed const &copie ) const;
       

        float toFloat( void ) const ;
        int   toInt( void ) const ;
        int   getRawBits( void ) const ;
        void  setRawBits( int const raw ) ;
    
    private:
        int _nb;
        static int const  _nbStatic = 8;    
    
};

std::ostream & operator<<(std::ostream & o , Fixed const &copie ) ;

#endif