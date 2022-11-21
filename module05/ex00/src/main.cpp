/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:01:48 by raaga             #+#    #+#             */
/*   Updated: 2022/11/18 20:02:20 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main () {
    Bureaucrat a("ramsy", 149);
    Bureaucrat b("donal", -1);

    std::cout << b << std::endl;
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelUp();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelDown();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelDown();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelDown();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    std::cout << a << std::endl;
    return (1);
}