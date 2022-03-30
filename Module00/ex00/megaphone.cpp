/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:05:51 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/27 17:58:56 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_printfupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		std::cout << (char)(std::toupper(str[i]));
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (av[++i])
		ft_printfupper(av[i]);
	std::cout << std::endl;
	return (1);
}