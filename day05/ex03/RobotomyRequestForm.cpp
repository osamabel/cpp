/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:49:16 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 10:20:38 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotoForm", 72, 45)
{
	this->target = "Request";
	std::cout << "ROBOTOMYREQUESTFORM DEFAULT CONSTRACTOR" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "ROBOTOMYREQUESTFORM DECONSTRACTOR" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotoForm", 72, 45)
{
	this->target = target;
	std::cout << "ROBOTOMYREQUESTFORM PARAMETERIZED CONSTRACTOR" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("RobotoForm", 72, 45)
{
	this->target = copy.target;
	std::cout << "ROBOTOMYREQUESTFORM COPY CONSTRACTOR" << std::endl;
}

/***************************************************************** Overloaded */
RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &assign)
{
    if (this != &assign)
    	target = assign.target;
    return (*this);
}

/******************************************************************** Methods */
std::string	RobotomyRequestForm::getTarget(void) const
{
	return (target);
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGradeExecuted())
        throw GradeCantExecuted();
    if (!getformIsSigned())
        throw FormNotSigned();
	std::cout << "	" << "+-------------------- Exectuting --------------------------+" << std::endl;
    std::cout << "	" << "DRILLING {noise!} - DRILLING {noise!} - DRILLING {noise!}" <<std::endl;
	std::srand(std::time(0));
    int request = std::rand() % 2;
    if (request)
        std::cout << "	" << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "	" << target << " failed!" << std::endl;
	std::cout << "	" << "+----------------------------------------------------------+" << std::endl;
}
