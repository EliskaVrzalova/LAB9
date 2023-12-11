// name: eliska vrzalova
// login: c00301738
// date: 29/11/2023
// est time: 10 min
// program title and description: Numbers calculations : this program ask for the number of numbers and the numbers, it adds all the numbers and it adds only odd numbers as well
//any known bugs : no error checking on letters

#include <iostream>

void calculateNumbers(int t_numberOfNumbers);
int main3()
{
	//variables
	int numberOfNumbers = 0;

	//ask user for input
	std::cout << "Enter the number of numbers:" << std::endl;
	std::cin >> numberOfNumbers;

	//error chcecking
	if (numberOfNumbers <= 0)
	{
		std::cout << "Error: the number entered cannot be less or equal to 0." << std::endl;
	}
	else
	{
		calculateNumbers(numberOfNumbers); //function call
	}


	system("Pause");
	return 0;
}

void calculateNumbers(int t_numberOfNumbers)
//asks for numbers, makes sum of them, find odd numbers among them and adds them
{
	int sum = 0;
	int sumOdd = 0;
	int count = 1;
	int number = 0;

	while (count <= t_numberOfNumbers)
	{
		std::cout << "Enter a number:" << std::endl; //ask user for input numbers of their choice (for ex. 7 times if numberOfNumbers is 7)
		std::cin >> number;
		sum = sum + number; //sum of the entered numbers
		if (number % 2 == 1)
		{
			sumOdd = sumOdd + number; //sum of the entered numbers that are odd
		}
		count++;
	} //end while
	
	std::cout << "The sum of the numbers:" << sum << std::endl;
	std::cout << "The sum of the odd numbers:" << sumOdd << std::endl;
}
