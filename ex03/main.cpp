#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria *tmp = new Ice;
	src->learnMateria(tmp);
	delete tmp;

	tmp = new Cure;
	src->learnMateria(tmp);
	delete tmp;

	Character *me = new Character;
	Character *tmpMe = new Character("me");
	Character *bob = new Character("bob");

	for (int i = -1; i <= 4; i++) {
		me->use(i, *bob);
		me->unequip(i);
	}

	tmpMe->equip(src->createMateria("ice"));
	tmpMe->equip(src->createMateria("cure"));
	tmpMe->equip(src->createMateria("something"));
	tmpMe->equip(src->createMateria("ice"));
	tmpMe->equip(src->createMateria("cure"));
	tmpMe->equip(src->createMateria("something"));

	tmp = src->createMateria("ice");
	tmpMe->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	tmpMe->equip(tmp);
	delete tmp;
	tmp = src->createMateria("something");
	me->equip(tmp);
	delete tmp;

	*me = *tmpMe;
	delete tmpMe;

	for (int i = -1; i <= 4; i++) {
		me->use(i, *bob);
		me->unequip(i);
	}

	for (int i = -1; i <= 4; i++) {
		me->use(i, *bob);
		me->unequip(i);
	}

	tmpMe = new Character;
	tmpMe->equip(src->createMateria("ice"));
	tmpMe->equip(src->createMateria("cure"));
	tmpMe->equip(src->createMateria("something"));
	tmpMe->unequip(0);
	tmpMe->unequip(1);
	tmpMe->unequip(2);
	*me = *tmpMe;
	*tmpMe = *me;
	delete tmpMe;

	tmpMe = new Character(*me);
	delete tmpMe;

	delete src;
	delete me;
	delete bob;
}
