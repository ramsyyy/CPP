/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:39:37 by raaga             #+#    #+#             */
/*   Updated: 2022/11/07 14:13:11 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point vect(Point a, Point b) {
    Point ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
    return (ab);
}

Fixed const pointo(Point const a, Point const b, Point const m) {
    return ((b.getX() - m.getX()) * (a.getY() - m.getY()) - ((b.getY() -m.getY()) * (a.getX() - m.getX())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) 
{
    Fixed const aa(pointo(a, b, point));
    Fixed const bb(pointo(b, c, point));
    Fixed const cc(pointo(c, a, point));

    if (aa == 0 || bb == 0 || cc == 0)  return (false);
    if (aa > 0) {
        if (bb > 0) {
            if (cc > 0) return (true);
        }
    }
    else if (aa < 0) {
        if (bb < 0) {
            if (cc < 0) return (true);
        }
    }
    return (false);
}