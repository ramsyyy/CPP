/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:01:48 by raaga             #+#    #+#             */
/*   Updated: 2022/11/24 13:56:06 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main () {
    Form *b = new PresidentialPardonForm("jardin");
    Bureaucrat a("ramsy", 150);

        a.signForm(*b);
        a.executeForm(*b);

    
    delete b;
    return (1);
}