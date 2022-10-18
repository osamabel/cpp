/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:50:06 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/18 16:20:13 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

# include <algorithm>
# include <iostream>
# include <vector>
# include <string>
# include <exception>

class Span
{
private:
	unsigned int     N;
	std::vector<int> numbers;
public:
/*************************************************************** CONSTRACTORS */
	Span();
	~Span();
	Span(unsigned int N);
	Span(const Span &copy);

/****************************************************************** OPERATORS */
	Span &operator = (const Span &assign);
	int &operator [] (int index);

/******************************************************************** METHODS */
	void addNumber(int n);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	std::vector<int> getvec();
	int shortestSpan();
	int longestSpan();
	void print();
/****************************************************************** EXCEPTION */
	class SpanExeption : public std::exception {
		const char *what() const throw();
	};
	class SpanOutRange : public std::exception {
		const char *what() const throw();
	};
	class SpanIsFull : public std::exception {
		const char *what() const throw();
	};
	class SpanIsEmpty : public std::exception {
		const char *what() const throw();
	};

};
#endif