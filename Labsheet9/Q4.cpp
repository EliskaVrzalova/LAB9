// name: eliska vrzalova
// login: c00301738
// date: 29/11/2023
// est time: 10 min
// program title and description: asks user to enter as many numbers as he entered in main in the range 5-15, adds them, finds the lowest number and calculates the average
//of the numbers
// any known bugs: no error checking on letters

#include <iostream>

float calculationNum(int t_numberOfNumbers);

int main4()
{
	//variables
	int numberOfNumbers = 0;
	float average = 0.0f;

	//ask user for input
	std::cout << "Enter the number of numbers:" << std::endl;
	std::cin >> numberOfNumbers;

	//error checking
	while (numberOfNumbers <= 0)
	{
		std::cout << "Error: the number entered cannot be less than or equal to 0" << std::endl;
		std::cout << "Please reenter the number of numbers:" << std::endl;
		std::cin >> numberOfNumbers;
	}
	average = calculationNum(numberOfNumbers); //function call
	std::cout << "The average number is:" <<average<< std::endl;

	system("Pause");
	return 1;
}

float calculationNum(int t_numberOfNumbers)
//ask user to enter as many numbers as he entered in main in the range 5-15, adds them, finds the lowest number and calculates the average
//of the numbers
{
	//variables
	int number = 0;
	int sum = 0;
	int count = 1;
	int largestNum = 5;
	int lowestNum = 15;
	float averageNum = 0.0f;

	while (count <= t_numberOfNumbers)
	{
		std::cout << "Enter a number:" << std::endl;
		std::cin >> number;
		if (number >= 5 && number <= 15)
		{
			sum = sum + number;
			if (largestNum < number)
			{
				largestNum = number;
			} // end if
			if (number < lowestNum)
			{
				lowestNum = number;
			} // end if
		}
		else
		{
			std::cout << "Error: the number must be in the range 5-15" << std::endl;
		} // end if
		count++;
	} // end while

	averageNum = sum / t_numberOfNumbers; //calculates the average of the numbers entered in the while loop
	std::cout << "The sum of the nubers is:" << sum << std::endl;
	std::cout << "The largest number is:" << largestNum << std::endl;
	std::cout << "The lowest number is:" << lowestNum << std::endl;

	return averageNum;
}