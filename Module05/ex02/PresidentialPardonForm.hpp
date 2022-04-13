/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:27:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 21:01:59 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm(void);

	std::string	getTarget(void) const;
	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGradeForSign(void) const;
	int			getGradeForExec(void) const;
	
	void		execute(Bureaucrat const & executor);

private:

	std::string	const	_Target;
	std::string const	_Name;
	bool				_Signed;
	int					_GradeForSign;
	int					_GradeForExec;

};

#endif