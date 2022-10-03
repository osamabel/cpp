/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:21:45 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 16:37:28 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "zombie are created" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << name << " are destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
void Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}