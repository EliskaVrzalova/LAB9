// name: eliska vrzalova
// login: c00301738
// date: 04/12/2023
// est time: 10 min
// program title and description: User chooses from menu if he wants to use fahrenheit to celsius convertion, inches to centimeters
// conversion or if he wants to exit the menu.
// any known bugs: No validation on user input

#include <iostream>

void fahrenheitToCelsius();
void inchesToCentimeters();

int main7()
{
	int choice = 0;

	do
	{
		std::cout<<std::endl << "Option 1 : Fahrenheit to Celsius conversion" << std::endl;
		std::cout << "Option 2 : Inches to Centimeters conversion" << std::endl;
		std::cout << "Option 3 : Exit" << std::endl;
		std::cout << "Enter the number of your choice: " << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			fahrenheitToCelsius();
			break;

		case 2:
			inchesToCentimeters();
			break;
		}
	} while (choice != 3); //end do while

	system("Pause");
	return 0;
}
void fahrenheitToCelsius()
//converts fahrenheit to celsius
{
	float fahrenheit = 0.0f;
	float celsius = 0.0f;
	const float CONVERSION = 9.0f / 5;

	//input
	std::cout << "Enter the temperature in fahrenheit:";
	std::cin >> fahrenheit;
	//calculation
	celsius = (fahrenheit - 32) / CONVERSION; //fahrenheit to celsius conversion
	std::cout << "The temperature in celsius is " << celsius << " degrees" << std::endl;

}
void inchesToCentimeters()
//converts inches to centimeters
{
	float inches = 0.0f;
	float centimeters = 0.0f;
	const float CONVERSION = 2.54f;

	//input
	std::cout << "Enter the lenght in inches:" << std::endl;
	std::cin >> inches;
	//calculation
	centimeters = inches * CONVERSION; //inches to centimeters conversion
	std::cout << "The lenght in centimeters is " << centimeters;
}