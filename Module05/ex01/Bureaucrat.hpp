/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:26:48 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 21:53:44 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include "Form.hpp"

class Form;

class Bureaucrat {

public:
	
	Bureaucrat();
	Bureaucrat(Bureaucrat const &);
	Bureaucrat(std::string name, int grade);
	Bureaucrat& operator=(Bureaucrat const &);
	~Bureaucrat();

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooHighException in Bureaucrat");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooLowException in Bureaucrat");
			}
	};

	int			getGrade(void) const;
	std::string	getName(void) const;

	void		increment(void);
	void		decrement(void);

	void		signForm(Form & Form);

	void		setGrade(int g);

private:
	std::string const	_Name;
	int					_Grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif