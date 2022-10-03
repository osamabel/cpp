/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:03:42 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 14:24:43 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*********************************************************/
/******************   Constractors    ********************/
/*********************************************************/
FragTrap::FragTrap() : ClapTrap()
{
	Hit = 100;
	Energy = 100;
	Damage = 30;
	std::cout << "FragTrap default Constractor!" << std::endl;
}
FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	Hit = 100;
	Energy = 100;
	Damage = 30;
	std::cout << "FragTrap Parameterized Constractor!" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap()
{
	std::cout << "FragTrap copy Constractor!" << std::endl;
	*this = copy;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " Destractor!" << std::endl;
}
/*********************************************************/
/******************     Overloded     ********************/
/*********************************************************/
FragTrap &FragTrap::operator = (const FragTrap &assign)
{
	if (this != &assign)
	{
		Name = assign.Name;
		Hit = assign.Hit;
		Energy = assign.Energy;
		Damage = assign.Damage;
		std::cout << "FragTrap assign Constractor!" << std::endl;
	}
	return (*this);
}
/*********************************************************/
/******************      Methods      ********************/
/*********************************************************/
void FragTrap::highFivesGuys(void)
{
	std::cout << std::endl << "---------------------------------------------------------" << std::endl;
	std::cout << "HIGH FIVES!!" << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
}