/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:00:33 by ladawi            #+#    #+#             */
/*   Updated: 2022/03/30 14:54:59 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>


class	Contact {

public:

	Contact(std::string n1, std::string n2, std::string nm, std::string phone, std::string secret);
	~Contact(void);

	std::string getfirstname(void) const;
	void		setfirstname(std::string name);

	std::string getlastname(void) const;
	void		setlastname(std::string name);

	std::string getnickname(void) const;
	void		setnickname(std::string nickname);
	
	std::string getphone(void) const;
	void		setphone(std::string phone);

	std::string getsecret(void) const;
	void		setsecret(std::string secret);

	void		printcontact(void) const;

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;

};

#endif