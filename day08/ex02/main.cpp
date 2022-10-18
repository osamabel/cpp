/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:05 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/18 16:17:29 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void testList()
{
	std::list<int> myList;

	myList.push_back(5);
	myList.push_back(17);
	myList.push_back(18);
	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	myList.push_back(0);
	std::cout << "size : " << myList.size() << std::endl;

	std::cout << "----------------------------{  Iterator :" << std::endl;
	std::cout << "elements : " << std::endl;
	std::list<int>::iterator itb = myList.begin();
	std::list<int>::iterator ite = myList.end();
	++itb;
	--itb;
	while (itb != ite)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::cout << "----------------------------{  Reverse Iterator :" << std::endl;
	std::cout << "elements : " << std::endl;
	std::list<int>::reverse_iterator ritb = myList.rbegin();
	std::list<int>::reverse_iterator rite = myList.rend();
	++ritb;
	--ritb;
	while (ritb != rite)
	{
		std::cout << *ritb << std::endl;
		++ritb;
	}
}

void testMutantStack()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(18);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "size : " << mstack.size() << std::endl;

	std::cout << "----------------------------{  Iterator :" << std::endl;
	std::cout << "elements : " << std::endl;
	MutantStack<int>::iterator itb = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++itb;
	--itb;
	while (itb != ite)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::cout << "----------------------------{  Reverse Iterator :" << std::endl;
	std::cout << "elements : " << std::endl;
	MutantStack<int>::reverse_iterator ritb = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	++ritb;
	--ritb;
	while (ritb != rite)
	{
		std::cout << *ritb << std::endl;
		++ritb;
	}
}

void testMutantStackstr()
{
	MutantStack<std::string> mstack;
	mstack.push("5");
	mstack.push("17");
	mstack.push("18");
	mstack.push("3");
	mstack.push("5");
	mstack.push("737");
	mstack.push("0");
	std::cout << "size : " << mstack.size() << std::endl;


	std::cout << "----------------------------{  Iterator :" << std::endl;
	std::cout << "elements : " << std::endl;
	MutantStack<std::string>::iterator itb = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	*itb = "osama";
	++itb;
	--itb;
	while (itb != ite)
	{
		std::cout << *itb << std::endl;
		++itb;
	}

	std::cout << "----------------------------{  Reverse Iterator :" << std::endl;
	std::cout << "elements : " << std::endl;
	MutantStack<std::string>::reverse_iterator ritb = mstack.rbegin();
	MutantStack<std::string>::reverse_iterator rite = mstack.rend();
	++ritb;
	--ritb;
	while (ritb != rite)
	{
		std::cout << *ritb << std::endl;
		++ritb;
	}
}

int main()
{

	std::cout << "====================================== [ MutantStack ]" << std::endl << std::endl;
	testMutantStack();
	std::cout << "====================================== [ List ]" << std::endl << std::endl;
	testList();
	std::cout << "====================================== [ MutantStackSTR ]" << std::endl << std::endl;
	testMutantStackstr();
	return 0;
}

