// name: eliska vrzalova
// login: c00301738
// date: 06/12/2023
// est time: 10 min
// program title and description: Fobinacci series: sums the first 20 numbers of Fobinacci series
// any known bugs: no validation on user input

#include <iostream>

void fobinacciSeries();

int main11()
{
	fobinacciSeries();//function call

	system("Pause");
	return 0;
}
void fobinacciSeries()
//sums the first 20 numbers of Fobinacci series
{
	int count = 1; //loop controller
	int number = 1; //number to be displayed
	int nextNumber = 0; //number coming after the 'number'.

	int sum = 0;

	while (count <= 20)
	{
		std::cout << " " << number << std::endl;
		sum = number; //sum is assigned the displayed number so this number is added with the next number coming up
		sum = sum + nextNumber; // adds the displayed number with the number which is coming after
		nextNumber = number; // coming number is assigned the value of the number so it updates for another loop
		number = sum; 
		count++;
	}

}