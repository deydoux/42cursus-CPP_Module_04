#include "Brain.hpp"

Brain::Brain() {
	std::cerr << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cerr << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain() {
	std::cerr << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cerr << "Brain copy assignement operator called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}

std::string Brain::getIdea(size_t index) const {
	if (index >= 100)
		return (std::string());
	return (_ideas[index]);
}

void Brain::setIdea(size_t index, std::string idea) {
	if (index < 100)
		_ideas[index] = idea;
}
