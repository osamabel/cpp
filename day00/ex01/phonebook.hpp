/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:55:59 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/24 15:39:14 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	void setFirstName(std::string First);
	void setLastName(std::string Last);
	void setNickName(std::string Nick);
	void setPhoneNumber(std::string Phone);
	void setSecret(std::string Secret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getSecret();
};

class PhoneBook
{
private:
	int IndexOfContacts;
	int NumberOfContacts;
	Contact myContacts[8];
public:
	PhoneBook();
	void AddContact();
	void DisplayContacts();
	bool DisplayContact(int index);
	std::string truncat(std::string str);
};
#endif