/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:55:03 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/11 16:02:59 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PardonForm", 25, 5)
{
	this->target = "Pardon";
	std::cout << "PRESIDENTIALPARDONFORM DEFAULT CONSTRACTOR" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PRESIDENTIALPARDONFORM DECONSTRACTOR" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PardonForm", 25, 5)
{
	this->target = target;
	std::cout << "PRESIDENTIALPARDONFORM PARAMETERIZED CONSTRACTOR" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("PardonForm", 25, 5)
{
	this->target = copy.target;
	std::cout << "PRESIDENTIALPARDONFORM COPY CONSTRACTOR" << std::endl;
}

/***************************************************************** Overloaded */
PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &assign)
{
    if (this != &assign)
    	target = assign.target;
    return (*this);
}

/******************************************************************** Methods */
std::string	PresidentialPardonForm::getTarget(void) const
{
	return (target);
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGradeExecuted())
        throw GradeCantExecuted();
    if (!getformIsSigned())
        throw FormNotSigned();
	std::cout << "	" << "+-------------------- Exectuting --------------------------+" << std::endl;
    std::cout << "	" << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	std::cout << "	" << "+----------------------------------------------------------+" << std::endl;
}
