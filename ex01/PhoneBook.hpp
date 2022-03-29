/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:00:30 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/29 11:30:28 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include "Contact.hpp"


class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	unsigned int	nbaddedcontact;
	Contact 		*tab[8];

	void	addcontact(int	id, std::string tab[5]);
	void	print(void);

private:

	Contact _gen0{"", "", "", "", ""};
	Contact _gen1{"", "", "", "", ""};
	Contact _gen2{"", "", "", "", ""};
	Contact _gen3{"", "", "", "", ""};
	Contact _gen4{"", "", "", "", ""};
	Contact _gen5{"", "", "", "", ""};
	Contact _gen6{"", "", "", "", ""};
	Contact _gen7{"", "", "", "", ""};

};

#endif