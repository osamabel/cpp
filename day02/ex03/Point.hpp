/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:18:36 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/11 15:06:11 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
/********************************************************************/
/**********************     CONSTRATORS       ***********************/
/********************************************************************/
	Point();
	Point(const float x, const float y);
	Point(const Point &copy);
	~Point();
	Point(const Fixed a, const Fixed b);
/********************************************************************/
/*****************    ARITHMETIC OPERATORS     **********************/
/********************************************************************/
	Point operator = (const Point &assign);
	Point operator - (const Point &assign) const;
/********************************************************************/
/*****************    COMPARISON OPERATORS     **********************/
/********************************************************************/
	bool operator == (const Point &equal) const;
/********************************************************************/
/**********************        METHODS        ***********************/
/********************************************************************/
	Fixed getX(void) const;
	Fixed getY(void) const;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif