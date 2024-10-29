#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &rhs);
	virtual void makeSound() const;
	std::string getType() const;
};

#endif
