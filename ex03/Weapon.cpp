#include "Weapon.hpp"

Weapon::Weapon( void )
{
    this->type = "\0";
}

Weapon::Weapon( std::string type )
{
    this->type = type;
}

Weapon::~Weapon( void )
{

}

void    Weapon::setType( std::string type )
{
    this->type = type;
}

std::string  Weapon::getType( void ) const
{
    return (this->type);
}