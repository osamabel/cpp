/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:11:44 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/18 16:45:42 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*************************************************************** CONSTRACTORS */
Span::Span(){}
Span::~Span(){}
Span::Span(unsigned int N) : N(N) {}
Span::Span(const Span &copy) { *this = copy; }

/****************************************************************** OPERATORS */
Span &Span::operator = (const Span &assign)
{
    if (this != &assign)
	{
		numbers = assign.numbers;
		N = assign.N;
	}
    return (*this);
}
int &Span::operator[](int index)
{
    if (numbers.empty())
        throw SpanIsEmpty();
    if (index >= (int)N || index < 0)
        throw SpanOutRange();
    return (numbers[index]);
}

/******************************************************************** METHODS */
std::vector<int> Span::getvec()
{
	return numbers;
}

void Span::print()
{
	if (N > 0)
	{
		std::vector<int>::iterator it1 = numbers.begin();
		std::vector<int>::iterator it2 = numbers.end();
		for (; it1 != it2; ++it1)
			std::cout << *it1 << std::endl;
	}
}

void Span::addNumber(int num)
{
    if (numbers.size() >= N)
        throw SpanIsFull();
    numbers.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it = begin;
    for (; it != end; ++it)
    	numbers.push_back(*it);
}

int Span::shortestSpan()
{
    if (numbers.size() < 2)
        throw (SpanExeption());

    std::vector<int>  vec(numbers);
	std::vector<int>::iterator it1 = vec.begin();
	std::vector<int>::iterator it2 = vec.end();
    std::sort(it1, it2);
    int	diff = *(it1 + 1) - *it1;
	it1++;
    for (; it1 + 1 != it2; ++it1)
	{
        if (*(it1 + 1) - *it1 < diff)
            diff = *(it1 + 1) - *it1;
	}
    return (diff);
}

int Span::longestSpan()
{
    if (numbers.size() < 2)
        throw (SpanExeption());
	std::vector<int>::iterator it1 = numbers.begin();
	std::vector<int>::iterator it2 = numbers.end();
    return (*std::max_element(it1, it2) - *std::min_element(it1, it2));
}

const char *Span::SpanExeption::what() const throw()
{
    return ("span not found!!");
}
const char *Span::SpanOutRange::what() const throw()
{
    return ("Index Out of range");
}
const char *Span::SpanIsFull::what() const throw()
{
    return ("Span is already full!");
}
const char *Span::SpanIsEmpty::what() const throw()
{
    return ("Span is Epmty!");
}