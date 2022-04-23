/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:29:02 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/23 19:19:06 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_H
# define INTER_H

# include <string>
# include <iostream>

template< typename T>
void	iter(T tab[], size_t len, void	func(T &arg)) {
	for (size_t i = 0; i < len; i++)
		func(tab[i]);
	return ;
}

#endif