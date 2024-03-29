#ifndef MATERIAICE_HPP
# define MATERIAICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &	operator=( Ice const & rhs );

		AMateria* clone() const;
		void	use(ICharacter& target);

	private:


};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ****************************************************** MATERIAICE_H */