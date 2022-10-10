/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelkhad <obelkhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:41:28 by obelkhad          #+#    #+#             */
/*   Updated: 2022/10/10 17:52:54 by obelkhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

/********************************************** CONS/DECONS *******************/
template <class T> Array<T>::Array()
{
	elm = nullptr;
}
template <class T> Array<T>::~Array()
{
	delete [] elm;
}
template <class T> Array<T>::Array(unsigned int n)
{
	mySize = n;
	elm = new T[n]();
}
template <class T> Array<T>::Array(const Array &copy)
{
	elm = nullptr;
	*this = copy;
}
/************************************************ OPERATORS *******************/
template <class T> Array<T> &Array<T>::operator=(const Array &assign)
{
	if (this != & assign)
	{
		delete [] elm;
		mySize = assign.mySize;
		elm = new T[mySize];
		for (size_t i = 0; i < mySize; i++)
			elm[i] = assign.elm[i];
	}
	return *this;
}
template <class T> T &Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= mySize)
		throw ArrayException();
	return elm[index];
}
/************************************************** METHODS *******************/
template <class T> void Array<T>::print()
{
	if (elm)
	{
		for (size_t i = 0; i < mySize; i++)
			std::cout << "[] " << elm[i] << std::endl;
	}
}
template <class T> size_t Array<T>::size()
{
	return (mySize);
}

/************************************************* EXEPTION *******************/
template <class T> const char *Array<T>::ArrayException::what() const throw()
{
	return ("Exception : index is out of bounds");
}
#endif