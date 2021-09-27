#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        void attack( void );
        HumanA( std::string name, Weapon &weapon );
        void    setName( std::string name );
        std::string getName( void ) const;
        void    setWeapon( Weapon &weapon );
        std::string getWeapon( void ) const;
};

#endif