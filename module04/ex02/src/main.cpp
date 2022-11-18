/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaga <raaga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:57:12 by raaga             #+#    #+#             */
/*   Updated: 2022/11/18 18:25:03 by raaga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"


int main()
{
	/*
std::cout << GB << "Mandatory Polymorphism tests :\n" << END;
	{
		std::cout << YB << "Constructors :\n" << END;
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << YB << "Destructors :\n" << END;
		delete	j;
		delete	i;
	}

	std::cout << GB << "\n Simple small array test :\n" << END;
	{
		std::cout << YB << "Constructors/Assignation :\n" << END;
		Animal	*tiny_hoard[2];
		tiny_hoard[0] = new Dog();
		tiny_hoard[1] = new Cat();

		std::cout << YB << "Tests :\n" << END;
		tiny_hoard[0]->makeSound();
		tiny_hoard[1]->makeSound();

		std::cout << YB << "Destructors :\n" << END;
		delete tiny_hoard[0];
		delete tiny_hoard[1];
	}

	std::cout << GB << "\n Simple array of 10 test :\n" << END;
	{
		std::cout << YB << "Constructors/Assignation :\n" << END;
		Animal	*hoard[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i < 5)
				hoard[i] = new Dog();
			else
				hoard[i] = new Cat();
		}

		std::cout << YB << "Tests :\n" << END;
		for (int i = 0; i < 10; ++i)
			hoard[i]->makeSound();

		std::cout << YB << "Destructors :\n" << END;
		for (int i = 0; i < 10; ++i)
			delete hoard[i];
	}*/
	std::cout << GB << "\n Deep copy tests :\n" << END;
	{
		Animal	*deep_test[2];
		{
			std::cout << YB << "Constructor derived classes :\n" << END;
			Dog		deep_dog;
			Cat		deep_cat;
			std::cout << YB << "Assignation :\n" << END;
			deep_test[0] = new Dog(deep_dog);
			deep_test[1] = new Cat(deep_cat);

			std::cout << YB << "First print, everything exists :\n" << END;
			deep_dog.makeSound();
			deep_cat.makeSound();
			deep_test[0]->makeSound();
			deep_test[1]->makeSound();

			std::cout << YB << "Destructors derived classes :\n" << END;
		}
		std::cout << YB << "Print to array still exists :\n" << END;
		deep_test[0]->makeSound();
		deep_test[1]->makeSound();
		
		std::cout << YB << "Destructors array :\n" << END;
		delete deep_test[0];
		delete deep_test[1];
	}

	return (0);
}
