/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:34:35 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/27 01:39:21 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <algorithm>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T> {

public:

	MutantStack() {};
	~MutantStack() {};

	MutantStack(MutantStack const &rhs) { 
		this->_stack = rhs.getStack();
		return ;
	};
	MutantStack& operator=(MutantStack const &rhs) {
		this->_stack = rhs.getStack();
		return (*this);
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(){
		return (this->c.begin());
	}
	iterator	end(){
		return (this->c.end());
	}

private:

};

#endif