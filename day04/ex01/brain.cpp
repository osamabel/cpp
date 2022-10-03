/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:31:01 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/30 18:15:52 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"
#include <iomanip>
/*----[ BRAIN ]-----\
                     \
					  \-------------------------------------------------------->
************************************************ Constractors - Deconstractor */
Brain::Brain()
{
	ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
    	ideas[i] = "IDEA[ " + std::to_string(i + 1) + " ]";
	std::cout << "BRAIN DEFAULT CONSTRACTOR!" << std::endl;
}
Brain::~Brain()
{
	delete [] ideas;
	std::cout << "BRAIN DECONSTRACTOR!" << std::endl;
}
Brain::Brain(const Brain &copy)
{
	ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "BRAIN COPY CONSTRACTOR!" << std::endl;
}
Brain::Brain(std::string type)
{
	ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
    	ideas[i] = type + " : IDEA[ " + std::to_string(i + 1) + " ]";
	std::cout << "BRAIN PARAMETERIZED CONSTRACTOR! " << std::endl;
}

/***************************************************************** Overloaded */
Brain &Brain::operator = (const Brain &assig)
{
	if (this != &assig)
	{
		for (size_t i = 0; i < assig.ideas->length(); i++)
			this->ideas[i] = assig.ideas[i];
		std::cout << "BRAIN ASSIGNMENT" << std::endl;
	}
	return (*this);
}
/******************************************************************* Methodes */
std::string *Brain::getIdeas()
{
	return (ideas);
}
void Brain::print()
{
	for (size_t i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}
