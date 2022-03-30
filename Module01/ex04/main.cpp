/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:01:53 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 19:20:57 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed_is_for_losers.hpp"

int		main(int ac, char **av)
{
	std::ifstream ifs(av[1]);
	std::string outfile;
	std::string line;
	std::string s1 = av[2];
	std::string s2 = av[3];
	size_t pos;

	if (ac != 4)
	{
		std::cout << "Err, nb args" << std::endl;
		return (1);
	}
	if (ifs.good() == 0)
	{
		std::cout << "Err, file input" << std::endl;
		return (1);
	}
	if (s1.empty() == 1)
	{
		std::cout << "Err, s1 is empty" << std::endl;
		return (1);
	}

	outfile.append(av[1]);
	outfile.append(".replace");
	std::ofstream ofs(outfile);
	while (ifs.eof() == 0)
	{
		std::getline(ifs, line);
		do
		{
			pos = line.find(s1, 0);
			if (pos != line.npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
		} while (pos != line.npos);
		ofs << line;
		ofs << std::endl;
	}
	return (0);
}