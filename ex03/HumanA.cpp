#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : name(name), weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void    HumanA::setWeapon( Weapon &weapon )
{
    this->weapon = weapon;
}

std::string  HumanA::getWeapon( void ) const
{
    return (this->weapon.getType());
}

void    HumanA::setName( std::string name )
{
    this->name = name;
}

std::string  HumanA::getName( void ) const
{
    return (this->name);
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacking with your " << this->weapon.getType() << std::endl;
}