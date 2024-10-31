#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat: public Animal {
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat &operator=(const Cat &rhs);
	void makeSound() const;
	Brain *getBrain() const;
};

#endif
