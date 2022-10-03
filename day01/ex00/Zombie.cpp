/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:27:16 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 16:29:46 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "NoName";
	std::cout << name << " Zombie are created" << std::endl;
}
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " are Creater" << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << name << " are destroyed" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name + " BraiiiiiiinnnzzzZ..." << std::endl;
}