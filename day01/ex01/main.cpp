/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:28:45 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 16:38:11 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	int N = 5;
	Zombie *z;

	z = zombieHorde(N, "Bo33o");
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
	return (0);
}