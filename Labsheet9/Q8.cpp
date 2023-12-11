// name: eliska vrzalova
// login: c00301738
// date: 04/12/2023
// est time: 10 min
// program title and description: Reverse display: displays numbers in reverse, 3 is substracted from every next number
// any known bugs: no error checking on letters

#include <iostream>

int reverseDisplay(int t_number);

int main()
{
	//variables
	unsigned int number = 0;
	int dipslay = 0;

	//ask user for input
	std::cout << "Enter a number:" << std::endl;
	std::cin >> number;
	//error checking
	if (number <= 0)
	{
		std::cout << "Error: the number entered must be greater than 0" << std::endl;
	}
	else
	{
		dipslay = reverseDisplay(number);
	}
	system("Pause");
	return 0;
}
int reverseDisplay(int t_number)
//displays numbers in reverse, 3 is substracted from every next number
{
	int sum = 0;

	while (t_number >= 0)
	{
		std::cout << " " << t_number;
		sum = sum + t_number;
		t_number = t_number - 3;
	} //end while

	std::cout << "The sum of the numbers is:" << sum << std::endl;
	return t_number;
}