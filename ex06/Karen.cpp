#include "Karen.hpp"
#include <iostream>

Karen::Karen( void )
{
    return;
}

Karen::~Karen( void )
{
    return;
}

void    Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int    Karen::getlevel( std::string level )
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

void    Karen::complain( std::string level )
{
	void (Karen::*pfnArray[4])();
	Karen karen;

	pfnArray[0] = &Karen::debug;
	pfnArray[1] = &Karen::info;
	pfnArray[2] = &Karen::warning;
	pfnArray[3] = &Karen::error;
	(karen.*pfnArray[karen.getlevel(level)])();
}
