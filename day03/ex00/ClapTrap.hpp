/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:43:39 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/29 14:11:04 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRP_H
#define CLAPTRP_H

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string Name;
	int			Hit;
	int			Energy;
	int			Damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap &operator = (const ClapTrap &assign);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void print();
};

#endif