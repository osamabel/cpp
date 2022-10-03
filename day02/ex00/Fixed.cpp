/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:09:51 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 14:40:22 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional(8);

Fixed::Fixed()
{
	fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator = (const Fixed &assigner)
{
	if (this != &assigner)
		fixedPoint = assigner.fixedPoint;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedPoint);
}
void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
	std::cout << "setRawBits member function called" << std::endl;
}