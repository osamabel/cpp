/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:41:39 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 08:31:08 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/************************************************ Constractor / Deconstractor */
Form::Form() : name("NoForm"), gradeToSigned(0), gradeToExecuted(0)
{
	formIsSigned = false;
	std::cout << "FORM DEFAULT CONSTRACTOR" << std::endl;
}
Form::~Form()
{
	std::cout << "FORM DECONSTRACTOR" << std::endl;
}
Form::Form(std::string const name, const int gradeToSigned, const int gradeToExecuted)
: name(name), gradeToSigned(gradeToSigned), gradeToExecuted(gradeToExecuted)
{
	if (this->gradeToSigned < 1 || this->gradeToExecuted < 1)
		throw GradeTooHighException();
	if (this->gradeToSigned > 150 || this->gradeToExecuted > 150)
		throw GradeTooLowException();
	this->formIsSigned = false;
	std::cout << "FORM PARAMETERIZED CONSTRACTOR" << std::endl;
}
Form::Form(const Form &copy) : name(copy.name), gradeToSigned(copy.gradeToSigned), gradeToExecuted(copy.gradeToExecuted)
{
	formIsSigned = copy.formIsSigned;
	std::cout << "FORM COPY CONSTRACTOR" << std::endl;
}

/***************************************************************** Overloaded */
Form &Form::operator = (const Form &assign)
{
	if (this != &assign)
		this->formIsSigned = assign.formIsSigned;
	return (*this);
}

std::ostream &operator << (std::ostream &COUT, const Form &form)
{
	COUT << std::endl;
	COUT << "~~~~~~~~~~~~~~~ FORM ~~~~~~~~~~~~~~~~" << std::endl;
	COUT << "Form : " << form.getName() << std::endl <<
	"grade required to sign form :" << form.getGradeSigned() << std::endl <<
	"grade required to execute form :" << form.getGradeExecuted() << std::endl <<
	"Form [ ";
	if (form.getformIsSigned())
		COUT << "SIGNED";
	else
		COUT << "NOT SIGNED";
	COUT << " ]" << std::endl;
	COUT << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return (COUT);
}
/******************************************************************** Methods */
std::string Form::getName() const
{
	return (name);
}
int Form::getGradeSigned() const
{
	return (gradeToSigned);
}
int Form::getGradeExecuted() const
{
	return (gradeToExecuted);
}
bool Form::getformIsSigned() const
{
	return (formIsSigned);
}
void Form::beSigned(const Bureaucrat &Bureau)
{
    if (Bureau.getGrade() > gradeToSigned)
        throw GradeCantSigned();
    formIsSigned = 1;
}
/****************************************************************** Exception */
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Lower Grade");
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Higher Grade");
}
const char *Form::FormNotSigned::what() const throw()
{
    return("Form Not Signed Yet");
}
const char *Form::GradeCantSigned::what() const throw()
{
    return("Bureaucrat Not Allowed To Signed");
}
const char *Form::GradeCantExecuted::what() const throw()
{
    return("Bureaucrat Not Allowed To Executed");
}