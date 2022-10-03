/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:04:15 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/23 18:48:12 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main()
{
	Intern	intern;
	Form	*form;
    std::cout << "~~~~~~~~~~~~~~~~ TRY NAME DOESN'T EXIST ~~~~~~~~~~~~~~~~" << std::endl;
	try{
		form = intern.makeForm("Shrubbery", "robo");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~ TRY NAME EXIST ~~~~~~~~~~~~~~~~~~~~" << std::endl;
	try{
		form = intern.makeForm("ShrubberyForm", "robo");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << *form;
	delete form;

	// std::cout <<  "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl  << std::endl << std::endl;
    // std::cout << "~~~~~~~~~~~~~~~~ TRY NAME DOESN'T EXIST ~~~~~~~~~~~~~~~~" << std::endl;
	// try{
	// 	form = intern.makeForm("Roboto", "robo");
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
    // std::cout << "~~~~~~~~~~~~~~~~~~~~ TRY NAME EXIST ~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// try{
	// 	form = intern.makeForm("RobotoForm", "robo");
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// std::cout << *form;
	// delete form;
	// std::cout <<  "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl  << std::endl << std::endl;
    // std::cout << "~~~~~~~~~~~~~~~~ TRY NAME DOESN'T EXIST ~~~~~~~~~~~~~~~~" << std::endl;
	// try{
	// 	form = intern.makeForm("Pardon", "robo");
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
    // std::cout << "~~~~~~~~~~~~~~~~~~~~ TRY NAME EXIST ~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// try{
	// 	form = intern.makeForm("PardonForm", "robo");
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	// std::cout << *form;
	// delete form;

}
