// name: eliska vrzalova
// login: c00301738
// date: 04/12/2023
// est time: 10 min
// program title and description: Occurences:finds the largest number and lowest number + counts how many times they occurred
// any known bugs: no error checking on letters

#include <iostream>

void countOccurences();

int main9()
{
	countOccurences();
	system("Pause");
	return 0;
}
void countOccurences()
//finds the largest number and lowest number + counts how many times they occurred
{
	//variables
	int count = 1;
	int numberOfNumbers = 0;
	int number = 0;
	int lowestNum = 10;
	int largestNum = 1;
	int lowestNumOccurence = 0;
	int largestNumOccurence = 0;

	//ask user for input
	std::cout << "Enter the number of numbers: ";
	std::cin >> numberOfNumbers;

	while (count <= numberOfNumbers)
	{
		std::cout << "Enter a number:"<<std::endl;
		std::cin >> number;
		if (number > 0 && number <= 10)
		{
			std::cout << " " << number;
			if (largestNum < number)
			{
				largestNum = number;
			}
			if (largestNum == number)
			{
				largestNumOccurence++;
			}
			if (lowestNum > number)
			{
				lowestNum = number;
			}
			if (lowestNum == number)
			{
				lowestNumOccurence++;
			}
			
		}
		else
		{
			std::cout << "Error: the number entered must be in the range 1-10." << std::endl;
		} //end if error checking
		count++;
	} // end while

	std::cout << "The largest number is " << largestNum << " and it occured " << largestNumOccurence << " times." << std::endl;
	std::cout << "The lowest number is " << lowestNum << " and it occured " << lowestNumOccurence << " times." << std::endl;

} // end function