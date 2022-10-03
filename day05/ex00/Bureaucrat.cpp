/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:20:48 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/21 18:55:37 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/************************************************ Constractor / Deconstractor */
Bureaucrat::Bureaucrat() : name("NoName"), grade(0)
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
	grade--;
	if (grade < 1)
		throw GradeTooHighException;
}
void Bureaucrat::gradeDown()
{
	grade++;
	if (grade > 150)
		throw GradeTooLowException;
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