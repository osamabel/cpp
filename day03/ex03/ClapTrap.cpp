/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:43:41 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 15:21:23 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*********************************************************/
/******************   Constractors    ********************/
/*********************************************************/
ClapTrap::ClapTrap()
{
	Hit = 10;
	Energy = 10;
	Damage = 0;
	this->Name = "unknowen";
	std::cout << "ClapTrap default Constractor!" << std::endl;
}
ClapTrap::ClapTrap(std::string Name)
{
	Hit = 10;
	Energy = 10;
	Damage = 0;
	this->Name = Name;
	std::cout << "ClapTrap Parameterized Constractor!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap copy Constractor!" << std::endl;
	*this = copy;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " Destractor!" << std::endl;
}

/*********************************************************/
/******************     Overloded     ********************/
/*********************************************************/
ClapTrap &ClapTrap::operator = (const ClapTrap &assign)
{
	if (this != &assign)
	{
		Name = assign.Name;
		Hit = assign.Hit;
		Energy = assign.Energy;
		Damage = assign.Damage;
		std::cout << "ClapTrap assign Constractor!" << std::endl;
	}
	return (*this);
}

/*********************************************************/
/******************      Methods      ********************/
/*********************************************************/
void ClapTrap::print()
{
	std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~ PRINT ~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Name : " << Name << std::endl;
	std::cout << "Hit points : " << Hit << std::endl;
	std::cout << "Energy points : " << Energy << std::endl;
	std::cout << "Attack damage : " << Damage << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
	std::cout << std::endl << "-------------------------- ATTACK -----------------------" << std::endl;
	std::cout << "ClapTrap " << Name;
	if (Hit == 0)
		std::cout << " is died!";
	else
	{
		if (Energy == 0)
			std::cout << Name << " is out of energy!";
		else
		{
			std::cout << " attacks " << target <<  ", causing " << Damage << " points of damage!";
			Energy--;
		}
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl << std::endl;
}
void ClapTrap::takeDamage(unsigned int amout)
{
	std::cout << std::endl << "-------------------------- DAMAGE -----------------------" << std::endl;
	std::cout << "ClapTrap " << Name;
	if (Hit == 0)
		std::cout << " is died!";
	else
	{
		std::cout << " take " << amout << " Damages!";
		if ((unsigned)Hit > amout)
			Hit -= amout;
		else
		{
			Hit = 0;
			std::cout << "( K.O )";
		}
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl << std::endl;
}
void ClapTrap::beRepaired(unsigned int amout)
{
	std::cout << std::endl << "-------------------------- REPAIRE -----------------------" << std::endl;
	std::cout << "ClapTrap " << Name;
	if (Hit == 0)
		std::cout << " is died!";
	else
	{
		if (Energy == 0)
			std::cout << " is out of energy!";
		else
		{
			Hit += amout;
			std::cout << " repaired by " << amout << " hit points!";
			Energy--;
		}
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------------------------" << std::endl << std::endl;
}
