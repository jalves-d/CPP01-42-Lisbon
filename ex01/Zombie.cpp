#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->name = "\0";
}

Zombie::Zombie ( std::string name )
{
    setName(name);
}

void    Zombie::setName( std::string name )
{
    this->name = name;
}

std::string  Zombie::getName( void ) const
{
    return (this->name);
}

void    Zombie::announce( void ) const 
{
    std::cout << this->getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie ( void )
{
    std::cout << this->getName() << " has died !" << std::endl;
}