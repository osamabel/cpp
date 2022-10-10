/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:37:09 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/05 13:23:42 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

/************************************************** CONSTRATOR / DECONSTRATOR */

Caster::Caster()
{
	infint = false;
	nanVal = false;
	// std::cout << "# CONSTRACTOR" << std::endl;
}
Caster::~Caster()
{
	// std::cout << "~ DECONSTRACTOR" << std::endl;
}
Caster::Caster(const Caster &copy)
{
	*this = copy;
	// std::cout << "COPY CONSTRACTOR" << std::endl;
}
Caster &Caster::operator = (const Caster &assing)
{
	if (this != & assing)
	{
		myChar = assing.myChar;
		myIntiger = assing.myIntiger;
		myFloat = assing.myFloat;
		myDouble = assing.myDouble;
		// std::cout << "ASSIGNER CONSTRACTOR" << std::endl;
	}
	return *this;
}

/******************************************************************** METHODS */
void Caster::setNan(bool b)
{
	nanVal = b;
}
void Caster::setinf(bool b)
{
	infint = b;
}
void Caster::setChar(char c)
{
	myChar = c;
}
void Caster::setIntiger(int i)
{
	myIntiger = i;
}
void Caster::setFloat(float f)
{
	myFloat = f;
}
void Caster::setDouble(double d)
{
	myDouble = d;
}
char Caster::getChar()
{
	return myChar;
}
int Caster::getIntiger()
{
	return myIntiger;
}
float Caster::getFloat()
{
	return myFloat;
}
double Caster::getDouble()
{
	return myDouble;
}
void Caster::print()
{
	//char
	std::cout << "char: ";
	if (infint || nanVal)
		std::cout <<  "impossible" << std::endl;
	else if ((int)myChar >= ' ' && (int)myChar <= 127)
		std::cout << "'" << myChar << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	// int
	std::cout << "int: ";
	if (infint || nanVal)
		std::cout <<  "impossible " << nanVal<< "-" << infint << std::endl;
	else
		std::cout << myIntiger << std::endl;

	//float
	std::cout << "float: ";
	if (nanVal)
		std::cout << "nan";
	else
	{
		std::cout << myFloat;
		if (myFloat - (int)myFloat == 0)
			std::cout << ".0";
	}
	std::cout << "f" << std::endl;

	//double
	std::cout << "double: ";
	if (nanVal)
		std::cout << "nan";
	else
	{
		std::cout << myDouble;
		if (myDouble - (int)myDouble == 0)
			std::cout << ".0" ;
	}
	std::cout << std::endl;
}

void Caster::castSet(char c)
{
	myChar = static_cast<char>(c);
	myIntiger = static_cast<int>(myChar);
	myDouble = static_cast<double>(myChar);
	myFloat = static_cast<float>(myChar);
}
void Caster::castSet(int i)
{
	myIntiger = static_cast<int>(i);
	myChar = static_cast<char>(myIntiger);
	myDouble = static_cast<double>(myIntiger);
	myFloat = static_cast<float>(myIntiger);
}
void Caster::castSet(float f)
{
	if (std::isinf(f))
		infint = true;
	if (std::isnan(f))
		nanVal = true;
	myFloat = static_cast<float>(f);
	myIntiger = static_cast<int>(myFloat);
	myChar = static_cast<char>(myFloat);
	myDouble = static_cast<double>(myFloat);
}
void Caster::castSet(double d)
{
	if (std::isinf(d))
		infint = true;
	if (std::isnan(d))
		nanVal = true;
	myDouble = static_cast<double>(d);
	myFloat = static_cast<float>(myDouble);
	myIntiger = static_cast<int>(myDouble);
	myChar = static_cast<char>(myDouble);
}