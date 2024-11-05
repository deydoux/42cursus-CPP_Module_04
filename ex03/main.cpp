#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void) {
	Character xav("Xavier");

	xav.equip(new Ice);
	xav.equip(new Cure);
	xav.unequip(1);
	xav.unequip(1);
}
