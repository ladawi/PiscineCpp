#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	// _inventory = new (AMateria *)[4];
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = 0;
	}
}

Character::Character( const Character & src )
{
	this->_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src.getInvSlot(i) != NULL)
			_inventory[i] = src.getInvSlot(i)->clone();
		else
			_inventory[i] = 0;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
		if (rhs.getInvSlot(i) != NULL)
			_inventory[i] = rhs.getInvSlot(i)->clone();
		else
			_inventory[i] = 0;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(_inventory[i]))
		{
			_inventory[i] = m;
			break;
		}
	}
	// std::cout << "Equip : " << std::endl;
}

void	Character::unequip(int idx)
{
	_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
	}
	// std::cout << "Use" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

AMateria*	Character::getInvSlot(int i) const {
	return (_inventory[i]);
}

/* ************************************************************************** */