#include "Zombie.hpp"

int main(int argc, char **argv)
{
    int i;
    Zombie *zombie;

    i = 0;    
    while (i < argc - 1)
    {
        zombie = newZombie(argv[i + 1]);
        zombie->announce();
        delete (zombie);
        randomChump(argv[i + 1]);
        i++;
    }
}