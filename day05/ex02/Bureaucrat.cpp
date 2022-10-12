/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:20:48 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/11 15:46:06 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/************************************************ Constractor / Deconstractor */
Bureaucrat::Bureaucrat() : name("unknowen"), grade(150)
{
	std::cout << "BUREAUCRAT DEFAULT CONSTRACTOR" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "BUREAUCRAT DECONSTRACTOR" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw GradeTooHighException;
	if (this->grade > 150)
		throw GradeTooLowException;
	std::cout << "BUREAUCRAT PARAMETERIZED CONSTRACTOR" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "BUREAUCRAT COPY CONSTRACTOR" << std::endl;
}

/****************************************************************** Overloded */
Bureaucrat &Bureaucrat::operator = (const Bureaucrat &assign)
{
	if (this != &assign)
		this->grade = assign.grade;
	return (*this);
}

std::ostream &operator << (std::ostream &COUT, const Bureaucrat &bureaucrat)
{
	COUT << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (COUT);
}

/******************************************************************** Methods */
int Bureaucrat::getGrade() const
{
	return (grade);
}
std::string Bureaucrat::getName() const
{
	return (name);
}
void Bureaucrat::gradeUp()
{
	if (grade - 1 < 1)
		throw GradeTooHighException;
	grade--;
}
void Bureaucrat::gradeDown()
{
	if (grade + 1 > 150)
		throw GradeTooLowException;
	grade++;
}
void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "~~~~~~~~~~~~~~~ SIGNED ~~~~~~~~~~~~~~" << std::endl;
		std::cout << "Mr " << name << " signed the " << form.getName() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << "~~~~~~~~~~~~~~ EXCEPTION ~~~~~~~~~~~~" << std::endl;
		std::cout << name << " couldn't sign the " << form.getName() << " because he has a :" << std::endl << exp.what() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}
}
void Bureaucrat::executForm(Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << "~~~~~~~~~~~~~ EXECUTED ~~~~~~~~~~~~~" << std::endl;
		std::cout << "Mr " << name << " execute the " << form.getName() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << "~~~~~~~~~~~~~~ EXCEPTION ~~~~~~~~~~~~" << std::endl;
		std::cout << name << " couldn't execute the " << form.getName() << " because :" << std::endl << exp.what() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	}
}
/****************************************************************** Exception */
const char *TooHigh::what() const throw()
{
    return ("grade out of range, ( no one highest then {1} )");
}
const char *TooLow::what() const throw()
{
    return ("grade out of range, ( no one lowest then {150} )");
}