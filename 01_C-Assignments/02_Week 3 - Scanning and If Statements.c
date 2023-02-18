
#include <stdio.h>
void main() {

	/*          Step 1
	Declaring and Initialising Variables */

	float Day1 = 0;
	float Day2 = 0;
	float Day3 = 0;
	float Day4 = 0;

	//Prompting the user to enter the amount of sales on Day 1 and scanning it into the variable Day 1.
	printf("Please enter the total sales for Day 1 (in Euros): ");
	scanf_s("%f", &Day1);

	//Prompting the user to enter the amount of sales on Day 2 and scanning it into the variable Day 2.
	printf("Please enter the total sales for Day 2 (in Euros): ");
	scanf_s("%f", &Day2);

	//Prompting the user to enter the amount of sales on Day 3 and scanning it into the variable Day 3.
	printf("Please enter the total sales for Day 3 (in Euros): ");
	scanf_s("%f", &Day3);

	//Prompting the user to enter the amount of sales on Day 4 and scanning it into the variable Day 4.
	printf("Please enter the total sales for Day 4 (in Euros): ");
	scanf_s("%f", &Day4);


	/*           Step 2
	 Declaring and Initialising the Average Sales Variable and declaring its formula*/
	float AverageSale = 0;
	AverageSale = (Day1 + Day2 + Day3 + Day4) / 4;

	printf("The average sale for the four days is: %.2f\n", AverageSale);


	/*           Step 3
	 Using if statements to inform the user if the sales are too low/normal/too high*/
	if (AverageSale > 15000) {
		printf("The average daily sales are too high!\n");
	}
	//If the average is lower than 10000, it will inform the user that its too low
	else if (AverageSale < 10000) {
		printf("The average daily sales are too low!\n");
	}
	//If the average is neither greater than 15000 or lower than 10000, the average must be in the middle and therefore normal.
	else {
		printf("The average daily sales are normal.\n");
	}
	

	/*           Step 4
	 Creating and initialising variables for the number of average customers (500) and the average spend per customer*/
	int AverageCustomers = 500;
	float AverageSpendPerCustomer = 0;

	//Expressing the equation for the Average spend per customer
	AverageSpendPerCustomer = AverageSale / AverageCustomers;

	//Displaying the Average Spend per Customer
	printf("The average spend per customer for the four days is: %.2f\n", AverageSpendPerCustomer);



}
