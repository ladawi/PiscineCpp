/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:49:40 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/25 02:22:55 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>

template< typename T>
typename T::iterator easyfind(T &arg1, int nb) {
	return (std::find(arg1.begin(), arg1.end(), nb));
};



#endif