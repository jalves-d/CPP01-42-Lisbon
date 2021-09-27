#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        void attack(void);
        HumanB( std::string name, Weapon &weapon);
        HumanB ( std::string name );
        void    setName( std::string name );
        std::string getName( void ) const;
        void    setWeapon( Weapon &weapon );
        std::string getWeapon( void ) const;
};

#endif