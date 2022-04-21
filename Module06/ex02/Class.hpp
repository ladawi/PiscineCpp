/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:12:33 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/21 18:15:27 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef CLASS_H
# define CLASS_H

class	Base {

public:

	virtual ~Base();

};

class	A : public Base {

public:
	A();
	~A();
};

class	B : public Base {

public:
	B();
	~B();
};

class	C : public Base {

public:
	C();
	~C();
};
#endif