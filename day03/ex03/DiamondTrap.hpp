/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:07:47 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 20:13:08 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap &operator = (const DiamondTrap &assign);
	void whoAmI();
	void print();
};

#endif