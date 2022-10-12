/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:04:15 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/11 15:43:53 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form form_err("Formerr", 5, 155);
	}
	catch (std::exception &e)
	{
		std::cout << std::endl;
		std::cout << "~~~~~~~~~~~~~~~ EXCEPTION ~~~~~~~~~~~~~~~~~" << std::endl;
		std::cerr << e.what() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	}
	Form form_1("Form[1]", 1, 1);
	Form form_2("Form[2]", 10, 1);
	Form form_3("Form[3]", 20, 1);
	Form form_4("Form[4]", 30, 10);
	Form form_5("Form[5]", 40, 10);
	std::cout << form_1;
	std::cout << form_2;
	std::cout << form_5;
	Bureaucrat osama("osama", 1);
	Bureaucrat bel("bel", 50);

	try{
		std::cout << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~ Sign ~~~~~~~~~~~~~~~~~~~" << std::endl;
		osama.signForm(form_1);
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "~~~~~~~~~~~~~~~ EXCEPTION ~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
		std::cerr << e.what() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	}

	try{
		std::cout << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~ Sign ~~~~~~~~~~~~~~~~~~~" << std::endl;
		bel.signForm(form_1);
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << std::endl;
		std::cout << "~~~~~~~~~~~~~~~ EXCEPTION ~~~~~~~~~~~~~~~~~" << std::endl;
		std::cerr << e.what() << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	}
}

