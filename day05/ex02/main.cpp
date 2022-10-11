/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:04:15 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/11 16:06:56 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.h"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm	ShrubberyOsama("ShrubberyOsama");
	RobotomyRequestForm		RobotomyOsama("RobotomyOsama");
	PresidentialPardonForm  PardonOsama("PardonOsama");

	ShrubberyCreationForm	ShrubberyNoob("ShrubberyNoob");
	RobotomyRequestForm		RobotomyNoob("RobotomyNoob");
	PresidentialPardonForm  PardonNoob("PardonNoob");

	Bureaucrat				osama("osama", 5);
	Bureaucrat				noob("noob", 100);
	std::cout << std::endl << "############################### [ OSAMA ] ###########################" << std::endl << std::endl;
	osama.signForm(ShrubberyOsama);
	osama.executForm(ShrubberyOsama);
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl << std::endl;
	osama.signForm(RobotomyOsama);
	osama.executForm(RobotomyOsama);
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl << std::endl;
	osama.executForm(PardonOsama);
	std::cout << std::endl;
	std::cout << std::endl << "############################### [ NOOB ] ###########################" << std::endl << std::endl;
	noob.signForm(ShrubberyNoob);
	noob.executForm(ShrubberyNoob);
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl << std::endl;
	noob.executForm(RobotomyNoob);
	std::cout << std::endl << "--------------------------------------------------------------------" << std::endl << std::endl;
	noob.signForm(PardonNoob);
	noob.executForm(PardonNoob);
}
