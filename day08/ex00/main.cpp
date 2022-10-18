/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:40:41 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/16 15:47:34 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <array>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
	// Vector
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i + 0);
	try
	{
		std::cout << easyfind(vec, 8) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// List
	std::list<int> lis;
	for (int i = 0; i < 10; i++)
		lis.push_back(i + 0);
	try
	{
		std::cout << easyfind(lis, 7) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// Array
	std::array<int, 10> arr;
	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;
	try
	{
		std::cout << easyfind(arr, 15) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// deque
	std::deque<int> deq;
	for (int i = 0; i < 10; i++)
		deq.push_back(i + 0);
	try
	{
		std::cout << easyfind(deq, 3) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}