#include <iostream>
#include <fstream>

#define Log(x) std::cout << x << std::endl

int main()
{
	uint16_t n = 16;

	std::ofstream myfile;
	myfile.open("AdjacentSquares.txt");
	myfile << "I'm confused";
	myfile.close();
}