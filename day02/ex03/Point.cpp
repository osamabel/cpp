/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:26:14 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 16:24:16 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/********************************************************************/
/**********************     CONSTRATORS       ***********************/
/********************************************************************/
Point::Point() : x (Fixed(0)), y (Fixed(0))
{
}
Point::~Point(){}
Point::Point(const float x, const float y) : x (Fixed(x)), y (Fixed(y))
{
}
Point::Point(const Fixed a, const Fixed b) : x (a), y (b)
{
}
Point::Point(const Point &copy)
{
	*this = copy;
}

/********************************************************************/
/*****************    ARITHMETIC OPERATORS     **********************/
/********************************************************************/
Point Point::operator = (const Point &assign)
{
	if (this != &assign)
	{}
	return (*this);
}

Point Point::operator - (const Point &minus) const
{
	Point mns(getX() - minus.getX(), getY() - minus.getY());
	return (mns);
}

/********************************************************************/
/*****************    COMPARISON OPERATORS     **********************/
/********************************************************************/
bool Point::operator == (const Point &equal) const
{
	if (this->x == equal.x && this->y == equal.y)
		return (true);
	return (false);
}

/********************************************************************/
/**********************        METHODS        ***********************/
/********************************************************************/
Fixed Point::getX(void) const
{
	return (x);
}
Fixed Point::getY(void) const
{
	return (y);
}