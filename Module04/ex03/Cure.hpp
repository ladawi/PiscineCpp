#ifndef MATERIACURE_HPP
# define MATERIACURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual AMateria* clone() const;
		void	use(ICharacter& target);

	private:


};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ***************************************************** MATERIACURE_H */