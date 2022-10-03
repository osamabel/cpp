/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:08:40 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/25 22:15:16 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	this->w_eapon = NULL;
	std::cout << "HumanB CONSTRACTOR" << std::endl;
}
HumanB::HumanB(std::string name)
{
	this->name = name;
	this->w_eapon = NULL;
	std::cout << "HumanB CONSTRACTOR" << std::endl;
}
HumanB::~HumanB(void)
{
	std::cout << "HumanB DECONSTRACTOR" << std::endl;
}
void HumanB::attack(void)
{
	if (this->w_eapon)
		std::cout << name << " attacks with their make " << this->w_eapon->getType() << std::endl;
	else
		std::cout << name << " have no Weapon" << std::endl;
}
void HumanB::setWeapon(Weapon &w_eapon)
{
	this->w_eapon = &w_eapon;
}