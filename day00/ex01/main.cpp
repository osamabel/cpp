/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:19:12 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 15:39:06 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main (void)
{
	PhoneBook crappySoftware;
	std::string command;
	int index;

	while(true)
	{
		std::cout << "What Is Your Command ?: ";
		if (!getline(std::cin, command))
			break;
		if (command == "ADD")
			crappySoftware.AddContact();
		else if (command == "SEARCH")
		{
			crappySoftware.DisplayContacts();
			std::cout << "Contact Index : ";
			std::cin >> index;
			if (crappySoftware.DisplayContact(index))
				break;
		}
		else if (command == "EXIT")
			exit(0);
		else
			std::cout << "[ Wrong Command! ]" << std::endl;
	}
	return (0);
}
