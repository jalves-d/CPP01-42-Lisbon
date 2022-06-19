#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harl;
	std::string info;

	info = argv[1];
	if (argc == 2)
	{
		switch (Harl.getlevel(info))
		{
			case 0 : std::cout << "[DEBUG]" << std::endl;
					break;
			case 1 : std::cout << "[INFO]" << std::endl;
					break;
			case 2 : std::cout << "[WARNING]" << std::endl;
					break;
			case 3 : std::cout << "[ERROR]" << std::endl;
					break;
			default : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
		if (Harl.getlevel(info) != -1)
			Harl.complain(info);
	}
	else
		std::cout << "Error, invalid parameters !" << std::endl;
}
