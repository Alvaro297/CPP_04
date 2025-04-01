#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:
	std::string ideas[100];

	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	std::string getIdea(int index) const;
	void setIdea(int index, const std::string& idea);
	~Brain();
};

#endif