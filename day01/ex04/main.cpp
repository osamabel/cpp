/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:30:00 by obelkhad          #+#    #+#             */
/*   Updated: 2022/09/28 08:21:03 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "content.hpp"

void readFile(FileContent *c)
{
	std::string holder;
	std::ifstream myFile;

	myFile.open(c->getPath());
	if (!myFile.is_open())
	{
		std::cerr << "Could not open the file - '" << c->getPath() << "'" << std::endl;
		exit(1);
	}
	while (std::getline(myFile, holder))
	{
		holder += '\n';
		c->appendContent(holder);
	}
	myFile.close();
}

void replaceString(FileContent *c)
{
	unsigned long index = 0;
	std::string half1;
	std::string half2;

	while (1)
	{
		index = c->getContent().substr(0, c->getContent().length()).find(c->getStr1());
		if (index == std::string::npos)
			break ;
		half1 = c->getContent().substr(0, index) + c->getStr2();
		half2 = c->getContent().substr(index + c->getStr1().length(), c->getContent().length());
		c->setContent(half1 + half2);
	}
}

void outputFile(FileContent *c)
{
	std::ofstream myFile;

	myFile.open(c->getPath() + ".replace");
	myFile << c->getContent();
	myFile.close();
}

int main()
{
	FileContent c;
	std::string holder;

	std::cout << "file name : ";
	std::getline(std::cin, holder);
	c.setPath(holder);

	std::cout << "target : ";
	std::getline(std::cin, holder);
	c.setStr1(holder);

	std::cout << "alternative : ";
	std::getline(std::cin, holder);
	c.setStr2(holder);

	readFile(&c);
	replaceString(&c);
	outputFile(&c);
	return (0);
}
