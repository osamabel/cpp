/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:40:44 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/11 15:32:34 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;
/****************************************************************[ EXCEPTION ]*/
class FormTooLow : public std::exception
{
public:
	const char* what() const throw();
};
class FormTooHigh : public std::exception
{
public:
	const char* what() const throw();
};
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
	~Form();

	/************************************************************* Overloaded */
	Form &operator = (const Form &assign);

	/**************************************************************** Methods */
	std::string getName() const;
	int getGradeSigned() const;
	int getGradeExecuted() const;
	bool getformIsSigned() const;
	void beSigned(const Bureaucrat &Bureau);

	/************************************************************** Exception */
	FormTooLow GradeTooLowException;
	FormTooHigh GradeTooHighException;
};

std::ostream &operator << (std::ostream &COUT, const Form &form);
#endif
