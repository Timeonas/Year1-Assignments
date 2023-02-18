
#include <stdio.h>
void main()
{
	//Declaring and Initialising Variables.
	int degC = 0;
	int degF = 0;

	//Prompting the user to enter a value for fahrenheit they want converted.
	printf("Enter temperature in degrees Fahrenheit:\n ");

	//Storing the information given by the user in the variable degF .
	scanf_s("%d", &degF);

	//Formula for converting fahrenheit to celsius and assigns the solution to the variable degC.
	degC = (degF - 32) * 5 / 9;
	
	//The conversion from fahrenheit to celsius is displayed to the user. 
	printf("Degrees Celsius = %d\n", degC);

	//If the celsius value is greater than 32, it prints too hot.
	if (degC > 32)
	{
		//Prints too hot.
		printf("Too hot!\n");
	}

	//If the celsius value is under 0, it prints too cold. 
	if (degC < 0)
	{
		//Prints too cold.
		printf("Too cold!\n");
	}
}
