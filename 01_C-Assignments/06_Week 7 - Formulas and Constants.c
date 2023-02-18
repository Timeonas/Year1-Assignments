//Name: Timonas Samoska
//Student ID: 21326923
//Date: 9/11/21

#include <stdio.h>
#include <string.h>

//Macros are defined
#define Half 0.5
#define PI 3.14

void main() {

	//Intialising variables that will be used in the calculations
	double Rheight, Rwidth, RArea;
	double TArea, CArea, TrArea;
	float TBase, THeight, CRadius, TrSum, Ta, Tb, TrHeight;

	//The done variable is declared to ensure the program loops
	int done = 0;

	//String variable used to read the user's choice
	char Choice[55];

	//While loop is used to repeat the desired calculations until the user wants to exit. 
	while (done != 1) {
	
	//Formatting 
		printf("Area Calculator - Shape Choices are:");
		printf("\n");
		printf("________________________________________________________________\n");
		printf("Triangle, Rectangle, Circle, Trapezium. \"Done\" to end\n");
		printf("________________________________________________________________\n");

		//Puts is used to print the following string
		puts("Choice:");
		//Gets is used to assign the information entered to the variable Choice
		gets(Choice);

		//If statement if the choice equals to Triangle
			if (strcmp(Choice, "Triangle") == 0 || strcmp(Choice, "triangle") == 0) {

				printf("Enter base of Triangle:");
				scanf_s("%f", &TBase);
				printf("Enter the height of the Triangle:");
				scanf_s("%f", &THeight);

				//Area of a triangle formula
				TArea = Half * TBase * THeight;
				printf("Area of Triangle: %.2lf\n", TArea);
			}

			//If statement if the choice equals to Circle
			else if (strcmp(Choice, "Circle") == 0 || strcmp(Choice, "circle") == 0) {
				printf("Enter the radius of the Circle: ");
				scanf_s("%f", &CRadius);

				//Area of a circle formula
				CArea = PI * CRadius * CRadius;
				printf("Area of Circle: %.2lf\n", CArea);
			}

			//If statement if the choice equals to Rectangle 
			else if (strcmp(Choice, "Rectangle") == 0 || strcmp(Choice, "rectangle") == 0) {
				printf("Enter the width of the Rectangle: ");
				scanf_s("%d", &Rwidth);
				printf("Enter the height of the Rectangle: ");
				scanf_s("%d", &Rheight);

				//Area of a rectangle formula 
				RArea = Rwidth * Rheight;
				printf("Area of Rectangle: %d\n", RArea);
			}

			//If statement if the choice equals to Trapezium
			else if (strcmp(Choice, "Trapezium") == 0 || strcmp(Choice, "trapezium") == 0) {
				printf("Enter the first parallel line of the Trapezium: ");
				scanf_s("%f", &Ta);
				printf("Enter the second parallel line of the Trapezium: ");
				scanf_s("%f", &Tb);
				printf("Enter the height of the Trapezium: ");
				scanf_s("%f", &TrHeight);

				//Area of a Trapezium
				TrSum = Ta + Tb;
				TrArea = Half*TrSum* TrHeight;
				printf("Area of Trapezium: %.2lf\n", TrArea);
			}

			//If statement if the user wants to finish using the program
			else if (strcmp(Choice, "Done") == 0 || strcmp(Choice, "done") == 0) {

				//Done equals 1 in order to falsify the while statement
				done = 1;
			}

			//Else statement if the information the user entered cant be interpreted and resets the program. 
			else {
				printf("Invalid, please try again.");
			}

			//Used to avoid the format printing twice everytime the loop loops
			getchar();
	} 
}
