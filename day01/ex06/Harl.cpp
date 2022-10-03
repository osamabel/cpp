/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 07:57:49 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 10:06:03 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	name[0] = "DEBUG";
	funPtr[0] = &Harl::debug;
	name[1] = "INFO";
	funPtr[1] = &Harl::info;
	name[2] = "WARNING";
	funPtr[2] = &Harl::warning;
	name[3] = "ERROR";
	funPtr[3] = &Harl::error;
	std::cout << "Harl created!" << std::endl;
}
Harl::~Harl()
{
	std::cout << "Harl distroyed!" << std::endl;
}
std::string Harl::getNameByIndex(int index)
{
	return (name[index]);
}
void Harl::debug(void)
{
	std::cout << "( debug )" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}
void Harl::info(void)
{
	std::cout << "( info )" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}
void Harl::warning(void)
{
	std::cout << "( warning )" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}
void Harl::error(void)
{
	std::cout << "( error )" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
void Harl::complain(std::string level)
{
	int i = 0;

	while (level != name[i] && i < 4)
		i++;
	if (i <= 3 && i >= 0)
		(this->*funPtr[i])();
	else
		std::cout << "Invalid Pointer!";
}

