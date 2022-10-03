/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:28:35 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 16:45:20 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//https://planetcalc.com/8108/

int main( void )
{
	if (bsp(Point(1, 5), Point(3,2), Point(-2,1),Point(3,3)))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
}

