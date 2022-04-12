/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:22:14 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/12 22:10:56 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef BRAIN_H
# define BRAIN_H

class Brain {

public:

	Brain(void);
	Brain(Brain const &);
	Brain& operator=(Brain const & tmp);
	~Brain(void);

	std::string ideas[100];
	void		printIdeas(void) const;
	void		setIdeas(std::string idea[100]);

private:

};

#endif