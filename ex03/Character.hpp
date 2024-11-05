#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaList.hpp"

class Character: public ICharacter {
private:
	AMateria *_inventory[4];
	MateriaList _unequiped;
	std::string _name;
public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	~Character();
	Character &operator=(const Character &rhs);
	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int index);
	void use(int index, ICharacter &target);
};

#endif
