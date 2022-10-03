/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:37:48 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 16:23:08 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

/********************************************************************/
/**********************     CONSTRATORS       ***********************/
/********************************************************************/
Fixed::Fixed()
{
	fixedPoint = 0;
}
Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}
Fixed::~Fixed(){}
Fixed::Fixed(const int integer)
{
	fixedPoint = integer * (1<<fractional);
}
Fixed::Fixed(const float floatingPoint)
{
	fixedPoint = roundf(floatingPoint * (1<<fractional));
}
/********************************************************************/
/**********************        METHODS        ***********************/
/********************************************************************/
int Fixed::getRawBits(void) const
{
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	return a;
}
Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > b)
		return (Fixed&)b;
	return (Fixed&)a;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > b)
		return (Fixed&)a;
	return (Fixed&)b;
}
/********************************************************************/
/*****************    COMPARISON OPERATORS     **********************/
/********************************************************************/
bool Fixed::operator > (const Fixed &more) const
{
	return (fixedPoint > more.fixedPoint);
}
bool Fixed::operator < (const Fixed &less) const
{
	return (fixedPoint < less.fixedPoint);
}
bool Fixed::operator >= (const Fixed &moreOrEqual) const
{
	return (fixedPoint >= moreOrEqual.fixedPoint);
}
bool Fixed::operator <= (const Fixed &lessOrEqual) const
{
	return (fixedPoint <= lessOrEqual.fixedPoint);
}
bool Fixed::operator == (const Fixed &equal) const
{
	return (fixedPoint == equal.fixedPoint);
}
bool Fixed::operator != (const Fixed &notEqual) const
{
	return (fixedPoint != notEqual.fixedPoint);
}
/********************************************************************/
/*****************    ARITHMETIC OPERATORS     **********************/
/********************************************************************/
Fixed &Fixed::operator = (const Fixed &assigner)
{
	if (this != &assigner)
		fixedPoint = assigner.fixedPoint;
	return (*this);
}
Fixed Fixed::operator + (const Fixed &plus)
{
	Fixed add;
	add.fixedPoint = fixedPoint + plus.fixedPoint;
	return (add);
}
Fixed Fixed::operator - (const Fixed &minus)
{
	Fixed mns;
	mns.fixedPoint = fixedPoint - minus.fixedPoint;
	return (mns);
}
Fixed Fixed::operator * (const Fixed &mulitplication)
{
	Fixed mltp;
	mltp.fixedPoint = (fixedPoint * mulitplication.fixedPoint) / (1<<fractional);
	return (mltp);
}
Fixed Fixed::operator / (const Fixed &divistion)
{
	Fixed divs;
	divs.fixedPoint = ((float)fixedPoint / (float)divistion.fixedPoint) * (1<<fractional);
	return (divs);
}
/********************************************************************/
/*****************     INCREMENT OPERATORS     **********************/
/********************************************************************/
Fixed &Fixed::operator ++ ()
{
	fixedPoint++;
	return (*this);
}
Fixed Fixed::operator ++ (int)
{
	Fixed post;
	post.fixedPoint = fixedPoint;
	fixedPoint++;
	return (post);
}
Fixed &Fixed::operator -- ()
{
	fixedPoint--;
	return (*this);
}
Fixed Fixed::operator -- (int)
{
	Fixed post;
	post.fixedPoint = fixedPoint;
	fixedPoint--;
	return (post);
}
std::ostream &operator << (std::ostream &COUT, const Fixed &object)
{
	COUT << object.toFloat();
	return (COUT);
}