#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	~Animal();
	Animal &operator=(const Animal &rhs);
	virtual void makeSound() const;
	std::string getType() const;
};

#endif
