/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:27:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/14 22:35:54 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"
// #include "Bureaucrat.hpp"

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &);
	~PresidentialPardonForm(void);
	
	class GradeRequiredErrorException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Executor don't have the required Grade : GradeRequiredErrorException");
			}
	};
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Executed Form is not signed : FormNotSignedException");
			}
	};

	std::string	getTarget(void) const;
	
	virtual void		execute(Bureaucrat &executor) const;

private:

	std::string	const	_Target;

};

#endif