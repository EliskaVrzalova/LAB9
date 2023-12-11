// name: eliska vrzalova
// login: c00301738
// date: 04/12/2023
// est time: 10 min
// program title and description:asks for number input in the range 5-12, adds all the inputs, the while loop terminates when user enters 0
// any known bugs: no error checkimg on letters

#include <iostream>
int sumTotal();

int main6()
{
	//variables
	int sum = 0;
	//function call
	sum = sumTotal();
	std::cout << "The sum of the numbers is:" <<sum<< std::endl;

	system("Pause");
	return 0;
}

int sumTotal()
//asks for number input in the range 5-12, adds all the inputs, the while loop terminates when user enters 0
{
	int sum = 0;
	int number = -1;

	while (number != 0)
	{
		std::cout << "Enter a number:" << std::endl;
		std::cin >> number;
		if (number >= 5 && number <= 12) //number has to be in range 5-12
		{
			sum = sum + number;
		}
		else
		{
			std::cout << "Error: the number must be in the range 5-12" << std::endl;
		} //end if
	}// end while
	return sum;
}