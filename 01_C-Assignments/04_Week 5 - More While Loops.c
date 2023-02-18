//Name: Timonas Samoska
//Student ID: 21326923
//Date: 26/10/21

#include <stdio.h>
void main() {

	//Initializing and declaring variables
	float DaySales[1000];
	float Average, Total = 0;
	int Num, Counter = 0;
	int Days = 7;

	//A for loop is used to store sales for specific days in the daysales array.
	for (int Days = 0; Days < 7; Days++)
	{
		//Prompts the user to enter the amount of sales on the day and saves it to the array.
		printf("Enter the total sales (Euro) for Day %d : ", Days + 1);
		scanf_s("%f", &DaySales[Days]);

		//Each days sales are added to the total variable. 
		Total = Total + DaySales[Days];
	}

	//Average formula
	Average = Total / Days;

	//Figures for total and average are printed to the screen
	printf("Total Sales for the seven days is %.2f\n", Total);
	printf("Average daily sales is %.2f\n", Average);

	//Prompting the user to enter additional days if they so wish
	printf("How many additional days would you like to record: ");

	//Number of additional days are stored in the Num Variable
	scanf_s("%d", &Num);

	//A counter variable and a while loop is used to store the additional days sales. This ensures that the exact amount of additional day's sales are stored in the array. 
	while (Num > Counter) 
	{
		//Prompts the user to enter the amount of sales on the additional days and saves it to the array.
		printf("Enter the total sale (Euro) for Day %d : ", Days + 1);
		scanf_s("%f", &DaySales[Days]);

		//New total is calculated with respect to the additional day's sales
		Total = Total + DaySales[Days];

		//Counter and number of day are brought forward
		Days++;
		Counter++;
	}

	//New Average is calculated with respect to the additional day's sales and number of days
	Average = Total / Days;

	//Figures for updated total and average are printed to the screen
	printf("Updated total Sales for the %d days is %.2f\n", Days, Total);
	printf("Updated average daily sales is %.2f\n", Average);

	//A for loop is used to print each day's sales. 
	for (int Counter = 0; Counter < Days; Counter++)
	{
		printf("Sales for day %d: %.2f euro\n", Counter + 1, DaySales[Counter]);
	}
}
