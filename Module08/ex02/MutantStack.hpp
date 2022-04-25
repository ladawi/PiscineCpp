/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:34:35 by ladawi            #+#    #+#             */
/*   Updated: 2022/04/25 05:48:51 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <algorithm>
# include <stack>

template < typename T >
class MutantStack {

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

	void	push(T tmp) {
		_stack.push(tmp);
	}
	
	bool	empty(void) {
		return (_stack.empty());
	}

	size_t size() const {
		return (_stack.size());
	};

	void	pop(void) {
		_stack.pop();
	}

	int &top(void) {
		return (_stack.top());
	}

	std::stack< T > &getStack() {
		return(_stack);
	};

private:

	std::stack< T > _stack;

};

#endif