/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:30:58 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/17 14:41:55 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
private:
	std::string *ideas;
public:
	/******************************************* Constractors - Deconstractor */
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain(std::string type);

	/************************************************************* Overloaded */
	Brain &operator = (const Brain &assig);

	/*************************************************************** Methodes */
	std::string *getIdeas();
	void print();
};

#endif