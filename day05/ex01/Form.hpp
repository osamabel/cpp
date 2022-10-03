/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:40:44 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/22 11:25:14 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;
/****************************************************************[ EXCEPTION ]*/
class FormTooLow : public std::exception
{
private:
// 	std::string error;
// public:
// 	FormTooLow() throw() {};
// 	FormTooLow(std::string error) throw();
// 	~FormTooLow() throw();
	const char* what() const throw();
};
class FormTooHigh : public std::exception
{
// private:
// 	std::string error;
// public:
// 	FormTooHigh(std::string error) throw();
// 	~FormTooHigh() throw();
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
