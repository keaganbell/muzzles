#include <iostream>
#include <fstream>
#include <queue>

#define LOG(x) std::cout << x << std::endl

int main()
{
	std::ofstream myfile;
	myfile.open("ConsecutiveNumbers.txt");
	for (size_t i = 1; i <= 100; i+=10)
	{
		uint16_t temp_sum = 0;
		std::queue<uint16_t> digits;
		for (size_t j = 0; j < 10; j++)
		{
			digits.push((uint16_t)j);
			for (size_t k = 0; k < digits.size(); k++)
			{
				temp_sum += digits.front();

				if(temp_sum == i + j)
					myfile << temp_sum << std::endl;

				digits.pop();
			}
		}
	}
	myfile.close();
}
