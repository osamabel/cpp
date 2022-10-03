/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:41:39 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 08:46:19 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string target;
public:
	/******************************************** Constractor / Deconstractor */
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	/************************************************************* Overloaded */
    ShrubberyCreationForm &operator = (const ShrubberyCreationForm &assign);

	/**************************************************************** Methods */
    std::string	getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif