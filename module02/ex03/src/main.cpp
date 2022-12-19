/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:00:00 by raaga             #+#    #+#             */
/*   Updated: 2022/12/14 17:17:26 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

int main() {
    Point const a(3, 1);
    Point const b(5, 4);
    Point const c(1, 4);
    Point const point(2, 2.5);


    std::cout << bsp(a,b, c, point) << std::endl;
    return (0);
}
