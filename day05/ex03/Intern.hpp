/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:57:54 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 17:40:46 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	/******************************************** Constractor / Deconstractor */
	Intern();
	~Intern();
	Intern(const Intern &copy);

	/************************************************************* Overloaded */
	Intern &operator = (const Intern &assign);
	Form *makeForm(std::string formName, std::string formTarget);

	/************************************************************** Exception */
	class FormNameDoesentExist : public std::exception
	{
		const char *what() const throw();
	};
};

#endif