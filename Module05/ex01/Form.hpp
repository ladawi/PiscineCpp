/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:27:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/13 19:10:53 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>

#ifndef FORM_H
# define FORM_H

class Form {

public:

	Form(void);
	Form(Form const &);
	Form(std::string name, int signlvl, int execlvl);
	Form& operator=(Form const &);
	~Form(void);
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooHighException in Form");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooLowException in Form");
			}
	};

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGradeForSign(void) const;
	int			getGradeForExec(void) const;

	void		setGradeForSign(int	g);
	void		setGradeForExec(int g);

private:

	std::string const	_Name;
	bool				_Signed;
	int					_GradeForSign;
	int					_GradeForExec;

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif