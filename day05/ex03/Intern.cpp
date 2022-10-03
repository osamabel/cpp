/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:51 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 18:24:12 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "INTERN DEFAULT CONSTRACTOR" << std::endl;
}
Intern::Intern(const Intern &copy)
{
	*this = copy;
    std::cout << "INTERN COPY CONSTRACTOR" << std::endl;
}
Intern::~Intern()
{
    std::cout << "INTERN DECONSTRACTOR" << std::endl;
}

/***************************************************************** Overloaded */
Intern &Intern::operator = (const Intern &assign)
{
    if (this != &assign){}
	return (*this);
}

/******************************************************************** Methods */
Form *Shrubbery(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

Form *Robotomy(std::string target)
{
    return(new RobotomyRequestForm(target));
}

Form *Pardon(std::string target)
{
    return(new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	Form* (*holder[3])(std::string) = {Shrubbery, Robotomy, Pardon};
	std::string Forms[3] = {"ShrubberyForm", "RobotoForm", "PardonForm"};
	int i = 0;
	while (formName != Forms[i] && i < 3)
		i++;
	if (!(i >= 0 && i <= 2))
		throw FormNameDoesentExist();
	return (holder[i](formTarget));
}

/****************************************************************** Exception */
const char *Intern::FormNameDoesentExist::what() const throw()
{
    return("Form Doesn't Exist");
}