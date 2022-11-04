/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:46:41 by raaga             #+#    #+#             */
/*   Updated: 2022/11/04 16:23:14 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {
    public:
        Point( void );
        Point(float const a, float const b);
        Point( Point const &copie );
        Point &operator=(Point const &copie);
        ~Point( void );

        Fixed   getX( void ) const ;
        Fixed   getY( void ) const ;

    private:
        Fixed _x;
        Fixed _y;
};

#endif