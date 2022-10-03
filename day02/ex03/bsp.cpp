/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:36:37 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 16:48:52 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed triangle = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	Fixed t1 = (point.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - point.getY()) + c.getX() * (point.getY() - b.getY())) / 2;
	Fixed t2 = (a.getX() * (point.getY() - c.getY()) + point.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - point.getY())) / 2;
	Fixed t3 = (a.getX() * (b.getY() - point.getY()) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY())) / 2;

	if (triangle < 0)
		triangle = triangle * -1;
	if (t1 < 0)
		t1 = t1 * -1;
	if (t2 < 0)
		t2 = t2 * -1;
	if (t3 < 0)
		t3 = t3 * -1;
	return ((triangle == t1 + t2 + t3) && t1 != 0 && t2 != 0 && t2 != 0);
}

//Other way
// https://math.stackexchange.com/questions/51326/determining-if-an-arbitrary-point-lies-inside-a-triangle-defined-by-three-points
// bool bsp(Point const a, Point const b, Point const c, Point const point)
// {
	//first move the origin at one vertex, like 𝐴 such that
	//𝐵→𝐵−𝐴
	//𝐶→𝐶−𝐴
	//𝑃→𝑃−𝐴
// 	Point b1(b - a);
// 	Point c1(c - a);
//     Fixed Wa, Wb, Wc, scalar;
// 	scalar = b.getX() * c.getY() - c.getX() * b.getY();
// 	Wa = (point.getX() * (b.getY() - c.getY()) + point.getY() * (c.getX() - b.getX()) + b.getX() * c.getY() - c.getX() * b.getY()) / scalar;
// 	Wb = (point.getX() * c.getY() - point.getY() * c.getX()) / scalar;
// 	Wc = (point.getY() * b.getX() - point.getX() * b.getY()) / scalar;
// 	std::cout << scalar <<std::endl;
// 	std::cout << Wa * scalar <<std::endl;
// 	std::cout << Wb * scalar <<std::endl;
// 	std::cout << Wc * scalar <<std::endl;
// 	if (Wa > 0 && Wa < 1 && Wb > 0 && Wb < 1 && Wc > 0 && Wc < 1)
// 		return true;
// 	return false;
// }