/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:29:34 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 16:23:21 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	static const int fractional;
public:
/********************************************************************/
/**********************     CONSTRATORS       ***********************/
/********************************************************************/
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed(const int integer);
	Fixed(const float floatingPoint);
/********************************************************************/
/*****************    COMPARISON OPERATORS     **********************/
/********************************************************************/
	bool operator > (const Fixed &more) const;
	bool operator < (const Fixed &less) const;
	bool operator >= (const Fixed &moreOrEqual) const;
	bool operator <= (const Fixed &lessOrEqual) const;
	bool operator == (const Fixed &equal) const;
	bool operator != (const Fixed &notEqual) const;
/********************************************************************/
/*****************    ARITHMETIC OPERATORS     **********************/
/********************************************************************/
	Fixed &operator = (const Fixed &assigner);
	Fixed operator + (const Fixed &plus);
	Fixed operator - (const Fixed &minus);
	Fixed operator * (const Fixed &mulitplication);
	Fixed operator / (const Fixed &divistion);
/********************************************************************/
/*****************     INCREMENT OPERATORS     **********************/
/********************************************************************/
	Fixed &operator ++ ();
	Fixed operator ++ (int);
	Fixed &operator -- ();
	Fixed operator -- (int);
/********************************************************************/
/**********************        METHODS        ***********************/
/********************************************************************/
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator << (std::ostream &COUT, const Fixed &object);
#endif