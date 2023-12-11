// name: eliska vrzalova
// login: c00301738
// date: 29/11/2023
// est time: 10 min
// program title and description: Start and end number: user is asked to enter starting and ending numbers, program then adds 
// all the numbers between them, starting and ending number inclusive
// any known bugs: no error checking on letters

#include <iostream>

int addNumbers(int t_startNum, int t_endNum);

int main5()
{
	int startNum = 0;
	int endNum = 0;
	int sum = 0;

	//ask user for input
	std::cout << "Enter the starting number:" << std::endl;
	std::cin >> startNum;
	std::cout << "Enter the ending number:" << std::endl;
	std::cin >> endNum;

	//error checking
	if (startNum <= 0 && endNum <= 0)
	{
		std::cout << "Error: the numbers entered must be greater than 0." << std::endl;
	}
	if (startNum > endNum)
	{
		std::cout << "Error: ending number must be greater than starting number" << std::endl;
	}
	sum = addNumbers(startNum, endNum); //function call
	std::cout << "The sum of the numbers is:" << sum << std::endl;

	system("pause");
	return 0;
}
int addNumbers(int t_startNum, int t_endNum)
//adds all numbers between starting and ending number which are entered by user in main
{
	int sum = 0;

	for (t_startNum; t_startNum <= t_endNum; t_startNum++)
	{
		sum = sum + t_startNum;
	}
	return sum;
}
