/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:43:19 by raaga             #+#    #+#             */
/*   Updated: 2022/12/19 18:13:59 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span {
public :
    Span( void );
    Span( unsigned int N );
    ~Span( void );
    Span	&operator=( Span const &copy );
    Span( Span const &copy );

    int     shortestSpan( void );
    int     longestSpan( void );
    void    addNumber(int number);
    void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    void    affiche( void );
    
    class ErrorSize : public std::exception {
        public :
        virtual const char *what() const throw() {
            return ("Probleme de tableau");
        }
    };
    
private : 
    int _stock;
    unsigned int _size;
    std::vector<int> _array;
};

#endif

