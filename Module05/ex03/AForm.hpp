/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:27:04 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/14 21:45:04 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stdexcept>

#ifndef AFORM_H
# define AFORM_H

#include "Bureaucrat.hpp"

class AForm {

public:

	AForm(void);
	AForm(AForm const &);
	AForm(std::string name, int signlvl, int execlvl);
	AForm& operator=(AForm const &);
	~AForm(void);
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooHighException in AForm");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return("Error GradeTooLowException in AForm");
			}
	};

	virtual std::string	getName(void) const;
	virtual bool		getSigned(void) const;
	virtual int			getGradeForSign(void) const;
	virtual int			getGradeForExec(void) const;

	void		setGradeForSign(int	g);
	void		setGradeForExec(int g);

	virtual void		execute(Bureaucrat &executor) const = 0;

	bool		beSigned(Bureaucrat const & executor);

private:

	std::string const	_Name;
	bool				_Signed;
	int					_GradeForSign;
	int					_GradeForExec;

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif