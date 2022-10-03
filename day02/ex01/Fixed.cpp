/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:37:48 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 15:29:39 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

const int Fixed::fractional(8);

/************************************************ Constractor / Deconstractor */
Fixed::Fixed()
{
	fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed::Fixed(const int integer)
{
	fixedPoint = integer * (1<<fractional);
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float floatingPoint)
{
	fixedPoint = roundf(floatingPoint * (1<<fractional));
	std::cout << "Float constructor called" << std::endl;
}

/***************************************************************** Overloaded */
Fixed &Fixed::operator = (const Fixed &assigner)
{
	if (this != &assigner)
		fixedPoint = assigner.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
std::ostream &operator << (std::ostream &COUT, const Fixed &object)
{
	COUT << object.toFloat();
	return (COUT);
}

/******************************************************************** Methods */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}
void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}
int Fixed::toInt(void) const
{
	return (fixedPoint / (1<<fractional));
}
float Fixed::toFloat(void) const
{
	return ((float)fixedPoint / (1<<fractional));
}