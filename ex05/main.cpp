#include "Harl.hpp"

int	main(void){
	Harl	Harl;

	std::cout << "Toma Harl Toma !" << std::endl;
	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
}

