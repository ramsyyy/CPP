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
#include "../include/Intern.hpp"


void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	srand(time(NULL));

	Bureaucrat jaeskim("jaeskim", 1);
	Bureaucrat wrong("wrong", 150);
	Intern intern;

	Form *form;

	form = intern.makeForm("shrubbery creation", "target");
	std::cout << form->getName() << std::endl;
	test_form(*form, jaeskim, wrong);
	delete form;
	form = intern.makeForm("robotomy request", "target");
	test_form(*form, jaeskim, wrong);
	delete form;
	form = intern.makeForm("presidential pardon", "target");
	test_form(*form, jaeskim, wrong);
	delete form;

	try
	{
		form = intern.makeForm("WrongName", "target");
		test_form(*form, jaeskim, wrong);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
