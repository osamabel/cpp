/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:19:22 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 15:38:47 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "phonebook.hpp"

/******************************************************************************/
/******************************* [ CONTACT ] **********************************/
/******************************************************************************/

void Contact::setFirstName(std::string First)
{
	FirstName = First;
}
void Contact::setLastName(std::string Last)
{
	LastName = Last;
}
void Contact::setNickName(std::string Nick)
{
	NickName = Nick;
}
void Contact::setPhoneNumber(std::string Phone)
{
	PhoneNumber = Phone;
}
void Contact::setSecret(std::string Secret)
{
	DarkestSecret = Secret;
}
 std::string Contact::getFirstName()
{
	return (FirstName);
}
 std::string Contact::getLastName()
{
	return (LastName);
}
 std::string Contact::getNickName()
{
	return (NickName);
}
 std::string Contact::getPhoneNumber()
{
	return (PhoneNumber);
}
 std::string Contact::getSecret()
{
	return (DarkestSecret);
}

/******************************************************************************/
/***************************** [ PHONEBOOK ] **********************************/
/******************************************************************************/

PhoneBook::PhoneBook()
{
	NumberOfContacts = 0;
	IndexOfContacts = 0;
}
void PhoneBook::AddContact()
{
	std::string holder;

	if (IndexOfContacts == 8)
		IndexOfContacts = 0;
	std::cout << "Enter Your Fisrt Name: ";
	getline(std::cin, holder);
	myContacts[IndexOfContacts].setFirstName(holder);

	std::cout << "Enter Your Last Name: ";
	getline(std::cin, holder);
	myContacts[IndexOfContacts].setLastName(holder);

	std::cout << "Enter Your Nick Name: ";
	getline(std::cin, holder);
	myContacts[IndexOfContacts].setNickName(holder);

	std::cout << "Enter Your Phone Name: ";
	getline(std::cin, holder);
	myContacts[IndexOfContacts].setPhoneNumber(holder);

	std::cout << "Enter Your Darkest Secret: ";
	getline(std::cin, holder);
	myContacts[IndexOfContacts].setSecret(holder);

	IndexOfContacts++;
	if (NumberOfContacts < 8)
		NumberOfContacts++;
}

std::string PhoneBook::truncat(std::string str)
{
	std::string holder;

	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::DisplayContacts()
{
	int	i = 0;
	std::string holder;

	if (NumberOfContacts == 0)
	{
		std::cout << "Contacts Is EMPTY!!" << std::endl;
		return ;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|  Index   |  FirstN  |  LastN   |   NickN  |" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	while (i < NumberOfContacts)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncat(myContacts[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncat(myContacts[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncat(myContacts[i].getNickName());
		std::cout << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		i++;
	}
}
bool PhoneBook::DisplayContact(int index)
{
	std::string holder;

	if (index < 0 || index > NumberOfContacts)
	{
		std::cout << "Index Out Of Range!!" << std::endl;
		return (0);
	}
	else
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << "|  Index   |  FirstN  |  LastN   |   NickN  |" << std::endl;
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << index;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncat(myContacts[index].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncat(myContacts[index].getLastName());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << truncat(myContacts[index].getNickName());
		std::cout << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
	return (0);
}