/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:22:25 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 11:28:19 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *z;
    int i = 0;

	if (N < 0)
	{
		std::cerr << "ERROR : CANNONT ALLOCAT WITH NEGATIVE NUMBER\n";
		exit(1);
	}
	z = new Zombie [N];
	while (i < N)
		z[i++].setName(name);
	return (z);
}
