#include "Zombie.hpp"

int	main(int argc, char *argv[])
{
	Zombie *zombies;
	std::string name;
	int N;
    int i;

    i = 0;
	if (argc != 3)
		return (1);
    N = std::atoi(argv[1]);
	name = argv[2];
	zombies = zombieHorde(N, name);
	while (i < N)
    {
		zombies[i].announce();
        i++;
    }
    delete [] zombies;
}