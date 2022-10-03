/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:23:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 14:58:10 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "poly.hpp"

/*----[ ANIMAL ]----\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
Animal::Animal()
{
	type = "AMINAL";
	std::cout << "ANIMAL DEFAULT CONSTRACTOR!" << std::endl;
}
Animal::~Animal()
{
	std::cout << "ANIMAL DECONSTRACTOR!" << std::endl;
}
Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "ANIMAL COPY CONSTRACTOR!" << std::endl;
}
Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "ANIMAL PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
Animal &Animal::operator = (const Animal &assig)
{
	if (this != &assig)
	{
		this->type = assig.type;
		std::cout << "ANIMAL ASSIGNMENT" << std::endl;
	}
	return (*this);
}

/******************************************************************* Methodes */
std::string Animal::getType() const
{
	return (type);
}
void Animal::makeSound() const
{
	std::cout << "NO SOUND!" << std::endl;
}

/*-----[ DOG ]------\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "DOG DEFAULT CONSTRACTOR!" << std::endl;
}
Dog::~Dog()
{
	std::cout << "DOG DECONSTRACTOR!" << std::endl;
}
Dog::Dog(const Dog &copy) : Animal()
{
	*this = copy;
	std::cout << "DOG COPY CONSTRACTOR!" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "DOG PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
Dog &Dog::operator = (const Dog &assig)
{
	if (this != &assig)
	{
		this->type = assig.type;
		std::cout << "DOG ASSIGNMENT" << std::endl;
	}
	return (*this);
}
/******************************************************************* Methodes */
void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!!" << std::endl;
}

/*-----[ CAT ]------\
                     \
					  \-------------------------------------------------------->

************************************************ Constractors - Deconstractor */
Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "CAT DEFAULT CONSTRACTOR!" << std::endl;
}
Cat::~Cat()
{
	std::cout << "CAT DECONSTRACTOR!" << std::endl;
}
Cat::Cat(const Cat &copy) : Animal()
{
	*this = copy;
	std::cout << "CAT COPY CONSTRACTOR!" << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "CAT PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
Cat &Cat::operator = (const Cat &assig)
{
	if (this != &assig)
	{
		this->type = assig.type;
		std::cout << "CAT ASSIGNMENT" << std::endl;
	}
	return (*this);
}
/******************************************************************* Methodes */
void Cat::makeSound() const
{
	std::cout << "MEOW MEOW!!" << std::endl;
}