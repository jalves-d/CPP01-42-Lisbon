#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	Karen;
	std::string info;

	info = argv[1];
	if (argc == 2)
	{
		switch (Karen.getlevel(info))
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
		if (Karen.getlevel(info) != -1)
			Karen.complain(info);
	}
	else
		std::cout << "Error, invalid parameters !" << std::endl;
}
