/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:40:44 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 18:03:29 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

/*********************************************************************[ FORM ]*/
class Form
{
private:
	const std::string name;
	bool formIsSigned;
	const int gradeToSigned;
	const int gradeToExecuted;
public:
	/******************************************** Constractor / Deconstractor */
	Form();
	Form(std::string const name, const int gradeToSigned, const int gradeToExecuted);
    Form(const Form &copy);
	virtual ~Form();

	/************************************************************* Overloaded */
	Form &operator = (const Form &assign);

	/**************************************************************** Methods */
	std::string getName() const;
	int getGradeSigned() const;
	int getGradeExecuted() const;
	bool getformIsSigned() const;
	void beSigned(const Bureaucrat &Bureau);
	virtual void execute(Bureaucrat const & executor) const = 0;

	/************************************************************** Exception */
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class FormNotSigned : public std::exception
	{
		const char *what() const throw();
	};
	class GradeCantSigned : public std::exception
	{
		const char *what() const throw();
	};
	class GradeCantExecuted : public std::exception
	{
		const char *what() const throw();
	};
};

std::ostream &operator << (std::ostream &COUT, const Form &form);
#endif
