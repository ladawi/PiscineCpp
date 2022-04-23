/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:28:31 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/23 20:39:35 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class	Array {

public:

	Array< T >() : _size(0), _array(NULL) { std::cout << "Default constructor\n"; };
	~Array< T >() {
		std::cout << "Default destructor" << std::endl;
		delete [] _array;
	 };
		
	class OOBindex : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error Array index out of bound.");
			}
	};
	
	Array< T >(unsigned int i) : _size(i), _array(new T[i]) {
		std::cout << "Init constructor\n";
	};
	Array< T >(Array const &rhs) {
		std::cout << "Copy constructor\n";
		_size = rhs.size();
		_array = new T[_size];
		for (unsigned x; x < _size; x++)
			_array[x] = rhs._array[x];
		*this = rhs;
	};
	Array& operator=(Array const &rhs) {
		std::cout << "Copy assignement operator\n";
		if (_size != 0)
			delete [] _array;
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned x; x < _size; x++)
			_array[x] = rhs._array[x];
		return (*this);
		};

	T&	operator[](unsigned int i) {
		if (i >= _size) {
			throw (Array::OOBindex());
		}
		return (_array[i]);
	};

	unsigned int size(void) const {
		return (_size);
	}


	unsigned int	_size;
	T*		_array;

// private:
};

#endif