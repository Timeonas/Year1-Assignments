//Name: Timonas Samoska
//Student ID: 21326923
//Date: 8/2/22 

//Libaries
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <string.h>

//Declaring functions as global functions
double DoubleArray[4] = { 1.50, 2.30, 4.70, 8.90 };
int IntArray[] = { 1,2,3,4,5 };

void main() {
	//Function Parameters for all questions are declared
	void printDoubleArray(double* dp, int len);
	void swapIntegerValues(int* i1, int* i2);
	void squareIntArray(int* i1, int len);
	void printIntegerArrayBackwards(int* arr, int len);
	void randomIntArray(int* arr, int len, int max);

	//Question 1
	//First pointer points to the double array
	double* ip1 = DoubleArray;
	//Pointer and length of the double array are passed into the array
	printDoubleArray(ip1,4);

	//Question 2
	//Variables and Pointers needed are declared for the question
	int x = 4;
	int y = 12;
	int* i1 = &x;
	int* i2 = &y;
	//Necessary variables and pointers are passed into the function
	swapIntegerValues(i1,i2);

	//Question 3
	//Pointer is assigned to the integer array
	int* i3 = IntArray;
	//Pointer is passed into the function and size too
	squareIntArray(i3, 5);

	//Question 4
	//Pointer is assigned to the integer array
	int* i4 = IntArray;
	//Pointer is passed into the function and size too
	printIntegerArrayBackwards(i4, 5);
	
	//Question 5
	//Random seed it generated
	srand(time(NULL));
	//Pointer, Size and Max values are passed into the function
	randomIntArray(i4,5,100);
}


void printDoubleArray(double* dp, int len) {
	puts("Q1: Double Array");
	//Loop until size of the array is met
	for (int i = 0; i < len; i++) {
		//Print the value in the array that dp is point to and increment the pointer with the countert to ensure all positions are printed
		printf("%.2f ", *(dp+i));
	}
}

void swapIntegerValues(int* i1, int* i2) {
	//CurrAddress variable is used to store one of the pointers address when the swap happens.
	int currAddress;
	puts("\nQ2: Integer Swap");
	printf("X = %d   Y = %d\n", *i1, *i2);
	//CurrAddress stores i1 pointers address
	currAddress = *i1;
	//i1 pointer is assigned i2's address
	*i1 = *i2;
	//i2 pointer is assigned i1's pointer (stored in the currAddress variable)
	*i2 = currAddress;
	printf("X = %d   Y = %d", *i1, *i2);
}

void squareIntArray(int* i1, int len) {
	puts("\nQ3: Square Array");
	//Power variable is used to store the result when finding the power value
	int Power;
	//FirstNumber variable is used to ensure the first position of the array is remembered.
	int FirstNumber = IntArray[0];
	//Loop until size of the array is met
		for (int i = 0; i < len; i++) {
			//The power of 2 (squared) of the value of the element the pointer is pointing.
			//I2 Pointer is incremented by i in the calculation to ensure each element of the array is accounted for as the for loop loops
			Power = pow(*(i1+i), 2);
			//Pointer is assigned the result of the equation
			*i1 = Power;
			//The pointer is used to store each element squared back into the global array
			IntArray[i] = *i1;
			//The Pointer is printed
			printf("%d ", *i1);
		}
		//As the loop finishes, the pointer is assigned the first number (of the original array) squared in order to ensure that it does not get overwritten with the last element once the pointer leaves the function.
		*i1 = pow(FirstNumber,2);
}
void printIntegerArrayBackwards(int* arr, int len) {
	puts("\nQ4: Array Backwards");
	//Loop through pointer backwards
	for (int i = len-1; i >= 0; i--) {
		printf("%d ", *(arr + i));
	}
}

void randomIntArray(int* arr, int len, int max) {
	puts("\nQ5: Random Integers");
	for (int i = 0; i < len; i++) {
		//Pointer is incremented
		*arr = *(arr + i);
		//Pointer is assigned a Random Number
		*arr = (rand() % max);
		//The array of random integers are printed
		printf("%d ", *arr);
	}
}










