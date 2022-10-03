/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:44:26 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 11:26:45 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	if (!z)
	{
		std::cerr << "ERROR : BAD_ALLOCATOR" << std::endl;
		exit(1);
	}
	return (z);
}