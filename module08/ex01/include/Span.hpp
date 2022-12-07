/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:43:19 by raaga             #+#    #+#             */
/*   Updated: 2022/12/07 19:14:26 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span {
public :
    Span( void );
    Span( unsigned int N );
    ~Span( void );
    Span	&operator=( Span const &copy );
    Span( Span const &copy );

    void    addNumber(int number);
    
    
    class ErrorSize : public std::exception {
        public :
        virtual const char *what() const throw() {
            return ("Trop de nombre");
        }
    };
    static  int i;
private : 
    
    unsigned int _size;
    int *_array;
};

#endif