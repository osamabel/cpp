/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:45:54 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/16 15:54:41 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrong.hpp"

/*---[ ANIMAL ]-----\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
WrongAnimal::WrongAnimal()
{
	type = "<WRONGANIMAL>";
    std::cout << "WRONGANIMAL DEFAULT CONSTRACTOR!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WRONGANIMAL DECONSTRACTOR!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
    *this = wronganimal;
	std::cout << "WRONGANIMAL COPY CONSTRACTOR!" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WRONGANIMAL PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
WrongAnimal &WrongAnimal::operator = (const WrongAnimal &assig)
{
	if (this != &assig)
	{
		this->type = assig.type;
		std::cout << "ANIMAL ASSIGNMENT" << std::endl;
	}
	return (*this);
}

/******************************************************************* Methodes */
std::string WrongAnimal::getType(void) const
{
    return (type);
}
void WrongAnimal::makeSound(void) const
{
    std::cout << "NO SOUND!" << std::endl;
}

/*-----[ CAT ]------\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
WrongCat::WrongCat() : WrongAnimal()
{
    type = "WRONGCAT";
    std::cout << "WRONGCAT DEFAULT CONSTRACTOR!" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WRONGCAT DECONSTRACTOR!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal()
{
    *this = wrongcat;
	std::cout << "WRONGCAT COPY CONSTRACTOR!" << std::endl;
}
WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WRONGCAT PARAMETERIZED CONSTRACTOR!" << std::endl;
}

/***************************************************************** Overloaded */
WrongCat &WrongCat::operator = (const WrongCat &assig)
{
	if (this != &assig)
	{
		this->type = assig.type;
		std::cout << "WRONGCAT ASSIGNMENT" << std::endl;
	}
	return (*this);
}
/******************************************************************* Methodes */
void WrongCat::makeSound(void) const
{
	std::cout << "MEOW MEOW!!" << std::endl;
}