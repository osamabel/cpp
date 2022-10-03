/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:26:07 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 11:59:51 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;
public:
	/******************************************** Constractor / Deconstractor */
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);

	/************************************************************* Overloaded */
	RobotomyRequestForm &operator = (const RobotomyRequestForm &assign);

	/**************************************************************** Methods */
    std::string	getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif