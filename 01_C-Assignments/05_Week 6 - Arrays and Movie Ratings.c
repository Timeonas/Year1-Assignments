//Name: Timonas Samoska
//Student ID: 21326923
//Date: 26/10/21

#include <stdio.h>
void main() {
	//Initialising and declaring Variables
	int Rating[2000];
	int RatingFrequency[5] = { 0,0,0,0,0 };
	float RatingPercent[5];
	float Total = 0;
	float Movies = 21;
	float Average;

	//For Loop is used to cycle between each of the 21 movies. 
	for (int i = 0; i < 21; i++)
	{
		//Prompts the user to enter the rating for each movie. Each rating is stored in the Ratings array. 
		printf("Enter Rating for Movie %d:", i + 1);
		scanf_s("%d", &Rating[i]);

		//Total is calculated using each rating
		Total = Total + Rating[i];

		//Series of if and elseif statements are used to store the number of ratings for stars 1-5
		if (Rating[i] == 1) {
			RatingFrequency[0]++;
		}

		else if (Rating[i] == 2) {
			RatingFrequency[1]++;
		}

		else if (Rating[i] == 3) {
			RatingFrequency[2]++;
		}

		else if (Rating[i] == 4) {
			RatingFrequency[3]++;
		}

		else if (Rating[i] == 5) {
			RatingFrequency[4]++;
		}
	}

	//Average is calculated using the total
	Average = Total / 21;

	printf("Average Rating: %.1f\n", Average);

	//Format for the Rating Frequency output
	printf("Rating Frequency\n");
	printf("----------------\n");
	printf("\n");

	
	printf("1 Stars ");
	for (int i = 1; i <= RatingFrequency[0]; i++) {
		printf("*");
	}
	printf(" %d", RatingFrequency[0]);

	//For loop is used to print asterisks for each 2 star rating
	printf("\n2 Stars ");
	for (int i = 1; i <= RatingFrequency[1]; i++) {
		printf("*");
	}
	printf(" %d", RatingFrequency[1]);

	//For loop is used to print asterisks for each 3 star rating
	printf("\n3 Stars ");
	for (int i = 1; i <= RatingFrequency[2]; i++) {
		printf("*");
	}
	printf(" %d", RatingFrequency[2]);

	//For loop is used to print asterisks for each 4 star rating
	printf("\n4 Stars ");
	for (int i = 1; i <= RatingFrequency[3]; i++) {
		printf("*");
	}
	printf(" %d", RatingFrequency[3]);

	//For loop is used to print asterisks for each 5 star rating
	printf("\n5 Stars ");
	for (int i = 1; i <= RatingFrequency[4]; i++) {
		printf("*");
	}
	printf(" %d", RatingFrequency[4]);

	//Format for the Rating Frequency output
	printf("\n----------------\n");
	printf("Rating Percent\n");
    printf("----------------\n");
	printf("\n");

	//For loop is used to go through the amount of each number of stars rating and divide it by the number of movies (21) to get the precentage.
	for (int i = 0; i <= 4; i++)
	{
		RatingPercent[i] =(RatingFrequency[i]/Movies)*100;
	}

	//For loop is used to print asterisks for the precentage of 1 star ratings
	printf("1 Stars ");
	for (int i = 1; i <= RatingPercent[0]; i++) {
		printf("*");
	}
	printf(" %.1f %%", RatingPercent[0]);

	//For loop is used to print asterisks for the precentage of 2 star ratings
	printf("\n2 Stars ");
	for (int i = 1; i <= RatingPercent[1]; i++) {
		printf("*");
	}
	printf(" %.1f %%", RatingPercent[1]);

	//For loop is used to print asterisks for the precentage of 3 star ratings
	printf("\n3 Stars ");
	for (int i = 1; i <= RatingPercent[2]; i++) {
		printf("*");
	}
	printf(" %.1f %%", RatingPercent[2]);

	//For loop is used to print asterisks for the precentage of 4 star ratings
	printf("\n4 Stars ");
	for (int i = 1; i <= RatingPercent[3]; i++) {
		printf("*");
	}
	printf(" %.1f %%", RatingPercent[3]);

	//For loop is used to print asterisks for the precentage of 5 star ratings
	printf("\n5 Stars ");
	for (int i = 1; i <= RatingPercent[4]; i++) {
		printf("*");
	}
	printf(" %.1f %%", RatingPercent[4]); 
}   
