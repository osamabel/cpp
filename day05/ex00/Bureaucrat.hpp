/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:07:52 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/21 18:53:46 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

/****************************************************************[ EXCEPTION ]*/
class TooLow : public std::exception
{
public:
	const char* what() const throw();
};
class TooHigh : public std::exception
{
	const char* what() const throw();
};

/***************************************************************[ BUREAUCRAT ]*/
class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	/******************************************** Constractor / Deconstractor */
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);

	/************************************************************* Overloaded */
	Bureaucrat &operator = (const Bureaucrat &assign);

	/**************************************************************** Methods */
	int getGrade() const;
	std::string getName() const;
	void gradeUp();
	void gradeDown();

	/************************************************************** Exception */
	TooLow GradeTooLowException;
	TooHigh GradeTooHighException;
};

std::ostream &operator << (std::ostream &COUT, const Bureaucrat &bureaucrat);
#endif