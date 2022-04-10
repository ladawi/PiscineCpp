/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:58:33 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/10 16:36:30 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	Fixed(void);
	Fixed(int const inb);
	Fixed(float const fnb);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &		operator=(Fixed const & rhs);
	Fixed		operator+(Fixed const & rhs) const;
	Fixed		operator-(Fixed const & rhs) const;
	Fixed		operator*(Fixed const & rhs) const;
	Fixed		operator/(Fixed const & rhs) const;

	bool		operator>(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	bool		operator<(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;

	Fixed		operator++(int);
	Fixed	&	operator++(void);
	Fixed		operator--(int);
	Fixed	&	operator--(void);


	static	Fixed & max(Fixed & n1, Fixed & n2);
	static	Fixed & min(Fixed & n1, Fixed & n2);
	static	Fixed const & max(Fixed const & n1, Fixed const & n2);
	static	Fixed const & min(Fixed const & n1, Fixed const & n2);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;

	void	setnb(int nb);
	int		getnb(void) const;

private:

	int		_nb;
	static int const _comma;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);
// Fixed			operator++(Fixed & rhs, int);
// Fixed		&	operator++(Fixed & rhs);



#endif