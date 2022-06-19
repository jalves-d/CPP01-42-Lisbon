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
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int    Harl::getlevel( std::string level )
{
	std::string levels[4];
	int i;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (i < 4)
	{
		if(level == levels[i])
			return (i);
		i++;
	}
	return (-1);
}

void    Harl::complain( std::string level )
{
	void (Harl::*pfnArray[4])();
	Harl harl;

	pfnArray[0] = &Harl::debug;
	pfnArray[1] = &Harl::info;
	pfnArray[2] = &Harl::warning;
	pfnArray[3] = &Harl::error;
	(harl.*pfnArray[harl.getlevel(level)])();
}
