/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:33:21 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/25 22:12:46 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w_eapon) : w_eapon(w_eapon)
{
	this->name = name;
	std::cout << "HumanA CONSTRACTOR" << std::endl;
}
HumanA::~HumanA(void)
{
	std::cout << "HumanA DECONSTRACTOR" << std::endl;
}
void HumanA::attack(void)
{
	std::cout << name << " attacks with their make " << this->w_eapon.getType() << std::endl;
}