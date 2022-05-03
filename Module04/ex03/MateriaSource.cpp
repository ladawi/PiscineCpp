#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_memory[i] = 0;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (int i = 0; i < 4; i++)
	{
		if (src.getMemory(i) != NULL)
			_memory[i] = src.getMemory(i)->clone();
		else
			_memory[i] = 0;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] != NULL)
			delete _memory[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(_memory[i]))
		{
			_memory[i] = m->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_memory[i] && _memory[i]->getType() == type)
			return (_memory[i]->clone());
	}
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

AMateria*	MateriaSource::getMemory(int i) const {
	return (_memory[i]);
}


/* ************************************************************************** */