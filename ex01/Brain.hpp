#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &rhs);
	std::string getIdea(size_t index) const;
	void setIdea(size_t index, std::string idea);
};

#endif
