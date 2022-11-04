/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:00:00 by raaga             #+#    #+#             */
/*   Updated: 2022/11/04 20:34:59 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    Point a(1, 1);
    Point b(3, 7);
    Point c(6, 1);
    Point point(5, 5);

    Point ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
    Point ac(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
    Point bc(c.getX().toFloat() - b.getX().toFloat(), c.getY().toFloat() - b.getY().toFloat());
    Point aPoint(point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat());
    Point bPoint(point.getX().toFloat() - b.getX().toFloat(), point.getY().toFloat() - b.getY().toFloat());
    Point cPoint(point.getX().toFloat() - c.getX().toFloat(), point.getY().toFloat() - c.getY().toFloat());

}
