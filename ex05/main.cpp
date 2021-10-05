#include "Karen.hpp"

int	main(void){
	Karen	Karen;

	std::cout << "Toma Karen Toma !" << std::endl;
	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
}
