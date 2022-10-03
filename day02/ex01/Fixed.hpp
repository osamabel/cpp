/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:38:01 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 14:44:14 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
	int fixedPoint;
	static const int fractional;
public:
	/******************************************** Constractor / Deconstractor */
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int integer);
	Fixed(const float floatingPoint);

	/************************************************************* Overloaded */
	Fixed &operator = (const Fixed &assigner);

	/**************************************************************** Methods */
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator << (std::ostream &COUT, const Fixed &object);
#endif