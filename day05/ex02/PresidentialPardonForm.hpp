/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:55:05 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 09:59:05 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
public:
	/******************************************** Constractor / Deconstractor */
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);

	/************************************************************* Overloaded */
	PresidentialPardonForm &operator = (const PresidentialPardonForm &assign);

	/**************************************************************** Methods */
    std::string	getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif