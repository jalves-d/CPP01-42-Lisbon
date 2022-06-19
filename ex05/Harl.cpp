
#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
    return;
}

Harl::~Harl( void )
{
    return;
}

void    Harl::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
	void (Harl::*pfnArray[4])();
	std::string levels[4];
	Harl harl;
	int i;

	i = 0;
	pfnArray[0] = &Harl::debug;
	pfnArray[1] = &Harl::info;
	pfnArray[2] = &Harl::warning;
	pfnArray[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (i < 4)
	{
		if(level == levels[i])
			(harl.*pfnArray[i])();
		i++;
	}
}
