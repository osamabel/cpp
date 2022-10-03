/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:23:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 17:42:18 by obelkhad         ###   ########.fr       */
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

/*-----[ DOG ]------\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
Dog::Dog() : Animal()
{
	type = "Dog";
	dogBrain = new Brain(type);
	std::cout << "DOG DEFAULT CONSTRACTOR!" << std::endl;
}
Dog::~Dog()
{
	delete dogBrain;
	std::cout << "DOG DECONSTRACTOR!" << std::endl;
}
Dog::Dog(const Dog &copy) : Animal()
{
	this->type = copy.type;
	this->dogBrain = new Brain(*copy.dogBrain);
	std::cout << "DOG COPY CONSTRACTOR!" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
	dogBrain = new Brain(type);
	std::cout << "DOG PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
Dog &Dog::operator = (const Dog &assig)
{
	if (this != &assig)
	{
		delete this->dogBrain;
		this->type = assig.type;
		this->dogBrain = new Brain(*assig.dogBrain);
		std::cout << "DOG ASSIGNMENT" << std::endl;
	}
	return (*this);
}
/******************************************************************* Methodes */
void Dog::makeSound() const
{
	std::cout << "WOOF WOOF!!" << std::endl;
}
Brain *Dog::getBrain(void) const
{
    return (dogBrain);
}

/*-----[ CAT ]------\
                     \
					  \-------------------------------------------------------->

************************************************ Constractors - Deconstractor */
Cat::Cat() : Animal()
{
	type = "Cat";
	catBrain = new Brain(type);
	std::cout << "CAT DEFAULT CONSTRACTOR!" << std::endl;
}
Cat::~Cat()
{
	delete catBrain;
	std::cout << "CAT DECONSTRACTOR!" << std::endl;
}
Cat::Cat(const Cat &copy) : Animal()
{
	this->type = copy.type;
	this->catBrain = new Brain(*copy.catBrain);
	std::cout << "CAT COPY CONSTRACTOR!" << std::endl;
}
Cat::Cat(std::string type) : Animal(type)
{
	catBrain = new Brain(type);
	std::cout << "CAT PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
Cat &Cat::operator = (const Cat &assig)
{
	if (this != &assig)
	{
		this->type = assig.type;
		delete this->catBrain;
		this->catBrain = new Brain(*assig.catBrain);
		std::cout << "CAT ASSIGNMENT" << std::endl;
	}
	return (*this);
}

/******************************************************************* Methodes */
void Cat::makeSound() const
{
	std::cout << "MEOW MEOW!!" << std::endl;
}
Brain *Cat::getBrain(void) const
{
    return (catBrain);
}