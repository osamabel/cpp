/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:11:11 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 15:29:20 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*********************************************************/
/******************   Constractors    ********************/
/*********************************************************/
DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	Hit = 100;
	Damage = 30;
	std::cout << "DiamondTrap default Constractor!" << std::endl;
}
DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), FragTrap(), ScavTrap()
{
	Hit = 100;
	Damage = 30;
	this->Name = Name;
	std::cout << "DiamondTrap Parameterized Constractor!" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap copy Constractor!" << std::endl;
	*this = copy;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " Destractor!" << std::endl;
}
/*********************************************************/
/******************     Overloded     ********************/
/*********************************************************/
DiamondTrap &DiamondTrap::operator = (const DiamondTrap &assign)
{
	if (this != &assign)
	{
		Name = assign.Name;
		Hit = assign.Hit;
		Energy = assign.Energy;
		Damage = assign.Damage;
		std::cout << "DiamondTrap assign Constractor!" << std::endl;
	}
	return (*this);
}
/*********************************************************/
/******************      Methods      ********************/
/*********************************************************/
void DiamondTrap::whoAmI()
{
	std::cout << std::endl << "-------------------------- whoAmI -----------------------" << std::endl;
	std::cout << "I'am " << Name << " Diamond!" << ", Son of " << ClapTrap::Name << " Clap!" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl << std::endl;
}
void DiamondTrap::print()
{
	std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~ PRINT ~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "CLAP-Name : " << ClapTrap::Name << std::endl;
	std::cout << "SCAV-Name : " << ScavTrap::Name << std::endl;
	std::cout << "Frag-Name : " << FragTrap::Name << std::endl;
	std::cout << "DIAMOND-Name : " << Name << std::endl;
	std::cout << "Hit points : " << Hit << std::endl;
	std::cout << "Energy points : " << Energy << std::endl;
	std::cout << "Attack damage : " << Damage << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
}