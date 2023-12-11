// name: eliska vrzalova
// login: c00301738
// date: 27/11/2023
// est time: 10 min
// program title and description: 10 even randomly generated numbers (10-50) summarized
// any known bugs: no validation on user input

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomEven();
int main2()
{
	//variables
	int sum = 0;

	srand(time(nullptr));

	sum = generateRandomEven(); //function call
	std::cout << "The sum of the numbers is:" << sum << std::endl;

	system("Pause");
	return 1;
}
int generateRandomEven()
//displays 10 random generated numbers in the range 10-50 and adds numbers which are even 
{
	int count = 10;
	int sum = 0;
	int number = 0;

	while (count <= 10)
	{
		number = (rand() % 41) + 10; 
		if (number % 2 == 0) //finds even numbers
		{
			sum = sum + number;
			count++;
		}
	}
	return sum;
}