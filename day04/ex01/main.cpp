/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:05:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 18:30:21 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

int main()
{
	{
		int len;
		std::cout << "Enter lenght: ";
		std::cin >> len;
		const Animal *animals[len];
		std::cout << std::endl << std::endl;
		/******************************************************* Constractors */
		for (int i = 0; i < len; i++)
		{
			std::cout << i + 1 << " : " << std::endl;
			if (i < len / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		/**********************************************************************/

		std::cout << std::endl << std::endl;
		/****************************************************** Deconstractor */
		for (int i = 0; i < len; i++)
		{
			std::cout << i + 1 << " : " << std::endl;
			delete animals[i];
		}
		/**********************************************************************/

		std::cout << std::endl << std::endl;
		/****************************************************** PARAMETERIZED */

		Cat cat("Kitty");
		Dog dog("Leo");
		std::cout << std::endl;

		Brain *catIdeas = cat.getBrain();
		std::cout << "PARAMETERIZED Cat -> " << catIdeas->getIdeas()[1] << std::endl;
		Brain *dogIdeas = dog.getBrain();
		std::cout << "PARAMETERIZED Dog -> " << dogIdeas->getIdeas()[12] << std::endl;

		std::cout << std::endl << std::endl;
		/********************************************************* ASSIGNMENT */

		Cat assigCat;
		assigCat = cat;
		Dog assigDog;
		assigDog = dog;
		std::cout << std::endl;

		assigCat.getBrain()->print();
		assigDog.getBrain()->print();
		std::cout << std::endl << std::endl;
		/*************************************************************** Copy */
		Cat copyCat(cat);
		Dog copyDog(dog);

		copyCat.getBrain()->print();
		copyDog.getBrain()->print();
	}
}