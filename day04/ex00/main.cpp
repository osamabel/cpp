/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:05:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 15:51:33 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"
#include "wrong.hpp"

int main()
{
std::cout << std::endl;
/*----[ ANIMAL ]----\
                     \
					  \-------------------------------------------------------*/
std::cout << "########      [ ANIMAL CLASS ]" << std::endl;
const Animal* obj;

std::cout << std::endl;
/************************************************************** [ ANIMAL ] ****/
	obj = new Animal();
    std::cout << obj->getType() << " --> ";
	obj->makeSound();
    delete obj;

std::cout << std::endl;
/***************************************************************** [ CAT ] ****/
	obj = new Cat();
    std::cout << obj->getType() << " --> ";
	obj->makeSound();
    delete obj;

std::cout << std::endl;
/***************************************************************** [ DOG ] ****/
	obj = new Dog();
    std::cout << obj->getType() << " --> ";
	obj->makeSound();
    delete obj;


std::cout << std::endl;
/*--[ WRONGANIMAL ]-\
                     \
					  \-------------------------------------------------------*/
std::cout << "########      [ WRONGANIMAL CLASS ]" << std::endl;

const WrongAnimal* wrongobj;
std::cout << std::endl;
/************************************************************** [ ANIMAL ] ****/
	wrongobj = new WrongAnimal();
	std::cout << wrongobj->getType() << " --> ";
	wrongobj->makeSound();
    delete wrongobj;

std::cout << std::endl;
/***************************************************************** [ CAT ] ****/
	wrongobj = new WrongCat();
	std::cout << wrongobj->getType() << " --> ";
	wrongobj->makeSound();
    delete wrongobj;
}
