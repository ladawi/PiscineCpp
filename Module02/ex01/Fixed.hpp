/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:58:33 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/06 15:48:15 by ladawi           ###   ########.fr       */
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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int		_nb;
	static int const _comma;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif