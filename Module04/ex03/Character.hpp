#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "exception"


class Character : public ICharacter
{

	public:

		Character();
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );

		std::string const & getName() const;

		void		equip(AMateria* m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
		AMateria*	getInvSlot(int i) const;

	private:
		std::string _name;
		AMateria* _inventory[4];

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */
