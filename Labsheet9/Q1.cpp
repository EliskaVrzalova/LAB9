// name: eliska vrzalova
// login: c00301738
// date: 27/11/2023
// est time: 10 min
// program tittle and description: 100 rand generated numbers (1-40) displayed and summarized
// any known bugs: No validation on user input

#include <cstdlib>
#include <ctime>
#include <iostream>

void generateRandom();
int main1()
{
	srand(time(nullptr)); // random number generator
	generateRandom(); //function call


	system("Pause");
	return 0;
}
void generateRandom()
//displays 10 random generated numbers in the range 1-40 and adds them
{
	//variables
	int count = 1;
	int sum = 0;
	int number = 0;
	

	while (count <= 10) //loop 10 times
	{
		number = (rand() % 40) + 1; //generates random numbers in the range 1-40
		std::cout << "The number is:" << number << std::endl;
		sum = sum + number; //adds all the generated numbers
		count++;
	}
	std::cout << "The sum of the numbers is:" << sum << std::endl; //answer
}



