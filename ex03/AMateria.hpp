#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;
public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(const AMateria &other);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &rhs);
	const std::string &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
