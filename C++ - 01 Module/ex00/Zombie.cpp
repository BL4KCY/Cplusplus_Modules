
#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Constructor
Zombie::Zombie(std::string name)
{
	this->name = name;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << this->name <<  ": is dead" <<  std::endl;
}

