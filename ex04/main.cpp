#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

void	getdatas(std::string &filestream, std::string &s1, std::string &s2)
{
	std::cout << "Digit name of FILESTREAM: ";
	std::getline(std::cin, filestream);
	std::cout << "Digit s1: ";
	std::getline(std::cin, s1);
	std::cout << "Digit s2: ";
	std::getline(std::cin, s2);
}

int main()
{
	std::string filestream;
    std::string s1;
    std::string s2;
	std::ifstream file;

	getdatas(filestream, s1, s2);
	file.open(filestream.c_str());
	if (!(file.is_open()))
		std::cout << "Invalid file ! Does not exist !" << std::endl;
	if (s1.empty())
		std::cout << "No s1 identified !" << std::endl;
	if (s2.empty())
		std::cout << "No s2 identified !" << std::endl;
	if (!(file.is_open()) || s2.empty() || s1.empty())
		return (0);
	file.close();
	std::ofstream ofs(filestream.c_str());
	ofs << s1 << s2 << std::endl;
	ofs.close();
}
