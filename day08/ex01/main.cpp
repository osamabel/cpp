/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:49:47 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/17 18:53:38 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <cstdlib>
#include <ctime>

#define SIZE_C 10

int main()
{
    std::srand(std::time(0));
    Span numbers1(SIZE_C);
    try
    {
        for	(size_t i = 0; i < SIZE_C; i++)
        {
            numbers1.addNumber(std::rand() % 50000);
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "----------< Out of Range >-----------" << std::endl;
	try
	{
		std::cout << numbers1[99]<< std::endl;
    	std::cout << "----------< Out of Range >-----------" << std::endl;
		std::cout << numbers1[50]<< std::endl;
		std::cout << numbers1[SIZE_C]<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
 	numbers1.print();
    std::cout << "----------< add more >-----------" << std::endl;
	try
	{
		numbers1.addNumber(55);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    Span empty1(SIZE_C);
    std::cout << "----------< empty >-----------" << std::endl;
	try
	{
		std::cout << empty1[0]<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << "----------< longestSpan >-----------" << std::endl;
    try
    {
        std::cout << numbers1.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "----------< shortestSpan >-----------" << std::endl;
    try
    {
        std::cout << numbers1.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }



    std::cout << "=================< range of iterators. >==================" << std::endl;
	std::vector<int> vec(numbers1.getvec());
	Span numbers2(SIZE_C);
    try
    {
        numbers2.addNumber(vec.begin(), vec.end());
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	numbers2.print();
	std::cout << "----------< longestSpan >-----------" << std::endl;
    try
    {
        std::cout << numbers2.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "----------< shortestSpan >-----------" << std::endl;
    try
    {
        std::cout << numbers2.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return(0);
}