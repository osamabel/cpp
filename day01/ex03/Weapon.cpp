/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:23:59 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/25 22:16:59 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "WEAPON CONSTRACTOR" << std::endl;
}
Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "WEAPON CONSTRACTOR" << std::endl;
}
Weapon::~Weapon(void)
{
	std::cout << "WEAPON DECONSTRACTOR" << std::endl;
}
const std::string &Weapon::getType()
{
	return (type);
}
void Weapon::setType(std::string type)
{
	this->type = type;
}