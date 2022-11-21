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
#include "../include/Form.hpp"

int main () {
    Bureaucrat a("ramsy", 16);
    //Bureaucrat b("donal", -1);
    Form    q("inscription", 0, 15, 25);


    std::cout << q << std::endl;
    a.signForm(q);
    std::cout << q << std::endl;
    /*std::cout << b << std::endl;
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelUp();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelDown();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelDown();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    a.levelDown();
    std::cout << a.getName() << " " << a.getGrade() << std::endl;
    std::cout << a << std::endl;*/
    return (1);
}