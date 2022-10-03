/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:04:15 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/21 17:34:56 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat test;
	try
	{
		Bureaucrat osama("osama", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat bel("bel", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << std::endl;
    {
        Bureaucrat alpha("alpha", 1);
        try
        {
        	alpha.gradeUp();
        }
        catch (std::exception & e)
        {
        	std::cout << e.what() << std::endl;
        }
    }
	std::cout << std::endl;
	Bureaucrat hitler("hitler", 150);
	try
	{
		hitler.gradeDown();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << hitler;
	std::cout << std::endl;
	std::cout << test;

	std::cout << std::endl;
}
