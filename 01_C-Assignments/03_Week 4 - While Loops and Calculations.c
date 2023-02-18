//Name: Timonas Samoska
//Student ID: 21326923
//Date: 19/10/21

#include <stdio.h>
void main() {
	//Initializing and declaring variables
	int Age = 0, Max = 0, Min = 100;
	float TotalAge = 0;
	float Average;

	//Counter
	int i = 0;

	//Informing the user how to continue with the program
	printf("If you want to continue, enter any number less than 0\n");

	//Using a while loop to allow the user to enter the ages of any amount of children as they wish
	while (Age >= 0) {
		//Increases the counter by 1 
		i++;
		//Prompts the user to enter the age of their child.
		printf("Enter the age of the child %d: ", i);
		scanf_s("%d", &Age);

		//Using an if statement with a condition that ensures the age is in between 0 - 17 in order for it to be applied to the average
		if (Age > 0 && Age < 18) {
			TotalAge = TotalAge + Age;
		}
		//An if statement with a condtion that if the age entered is above 18, it will not count towards the average and the counter will reset
		if (Age >= 18) {
			printf("Not a Child\n");
			//Sets the counter back to its previous state.
			i--;
		}

		//Using if statements to determine the maximum and minimum age values entered by the user

			//The age for maximum will be considered if its higher than the current maximum value and less than 18 to ensure adult children are not included
		if (Age > Max && Age < 18) {
			Max = Age;
		}

		//The age for minimum will be considered if it is lower than the current minimum value. It must also be greater than 0 in order to ensure a minus number is not included.
		if (Age <= Min && Age >= 0) {
			Min = Age;
		}
	}

	printf("Exiting while loop\n");

	//Counter's original intialised value of 1 is removed.
	i--;

	printf("There are %d children\n", i);

	//Average formula: The total age of the children and divided by the number of children (counter)
	Average = TotalAge / i;

	printf("The Average Age is %.2f\n", Average);

	//Prints the stored min and max values
	printf("The maximum age is %d\n", Max);
	printf("The minimum age is %d\n", Min);
}
