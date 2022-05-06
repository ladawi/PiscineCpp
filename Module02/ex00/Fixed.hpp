/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:58:33 by ladawi            #+#    #+#             */
/*   Updated: 2022/05/06 15:48:10 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	Fixed(void);
	Fixed(int const nb);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &		operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int		_nb;
	static int const _comma;

};

#endif