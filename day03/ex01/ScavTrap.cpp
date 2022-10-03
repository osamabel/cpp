/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:31:07 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 14:26:25 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*********************************************************/
/******************   Constractors    ********************/
/*********************************************************/
ScavTrap::ScavTrap() : ClapTrap()
{
	Hit = 100;
	Energy = 50;
	Damage = 20;
	std::cout << "ScavTrap default Constractor!" << std::endl;
}
ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	Hit = 100;
	Energy = 50;
	Damage = 20;
	std::cout << "ScavTrap Parameterized Constractor!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	std::cout << "ScavTrap copy Constractor!" << std::endl;
	*this = copy;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " Destractor!" << std::endl;
}
/*********************************************************/
/******************     Overloded     ********************/
/*********************************************************/
ScavTrap &ScavTrap::operator = (const ScavTrap &assign)
{
	if (this != &assign)
	{
		Name = assign.Name;
		Hit = assign.Hit;
		Energy = assign.Energy;
		Damage = assign.Damage;
		std::cout << "ScavTrap assign Constractor!" << std::endl;
	}
	return (*this);
}
/*********************************************************/
/******************      Methods      ********************/
/*********************************************************/
void ScavTrap::guardGate()
{
	std::cout << std::endl << "-------------------------- GRADE -----------------------" << std::endl;
	std::cout << "ScavTrap " << Name << " Is now in { Gate keeper mode }.";
	std::cout << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	std::cout << std::endl << "-------------------------- ATTACK -----------------------" << std::endl;
	std::cout << "ScavTrap " << Name;
	if (Hit == 0)
		std::cout << " is died!";
	else
	{
		if (Energy == 0)
			std::cout << " is out of energy!";
		else
		{
			std::cout << " attacks " << target <<  ", causing " << Damage << " points of damage!";
			Energy--;
		}
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl << std::endl;
}