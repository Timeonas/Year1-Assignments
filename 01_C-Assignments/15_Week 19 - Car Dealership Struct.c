//Name: Timonas Samoska
//Student ID: 21326923
//Date: 22/2/22 

//Libaries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Structure for garage of cars
typedef struct {
	char make[20];
	char model[20];
	int year;
}car;

car garage[10];
//Function Declarations
void readCars(char myfilePath[], int numCars);
void displayGarage(int numCars);
int checkYear(int numCars, int year);

void main() {
	//Filepath for csv file
	char myfilePath[] = "C:\\Users\\burli\\OneDrive - National University of Ireland, Galway\\Desktop\\carsYear.csv";
	//Parameters are passed into functions
	readCars(myfilePath, 10);
	displayGarage(10);

	//Ans variable stores number of car with 2016 as the make year
	int ans = checkYear(10, 2016);
	printf("There are %d cars with year %d in the garage.\n", ans, 2016);
}

void readCars(char myfilePath[], int numCars) {
	//Variables are declared
	char line[200];
	//Delimiters that will be used with strtok are declared
	char Delimiter1[] = ",";
	char Delimiter2[] = " ";
	//Pointers are declared
	FILE* fptr;
	car* cptr;
	fopen_s(&fptr, myfilePath, "r");
	if (fptr!= NULL) {
		//For loop to loop the 10 cars
		for (int i = 0; i < numCars; i++) {
			//Pointer is assigned the address of an element in the garage array
			cptr = &garage[i];
			//The entire line is assigned to the line variable
			fgets(line, 200, fptr);
			//Variables used to store the strings are declared
			char* Next = NULL;
			//strtok is used to parse the entire line until the delimiter is reached
			char* First = strtok_s(line, Delimiter2, &Next);
			//The string First contains the make of the car and is stored in array using the pointer
			strcpy_s(cptr->make, 20, First);
			//Strtok is used again but this time a space delimiter is used to get the model name
			First = strtok_s(NULL, Delimiter1, &Next);
			strcpy_s(cptr->model, 20, First);
			First = strtok_s(NULL, Delimiter1, &Next);
			//Array element's year value is turned from a string to an int
			garage[i].year = atoi(First);
		}
		fclose(fptr);
	}
}

void displayGarage(int numCars) {
	printf("-----Cars In Garage-----\n");
	//All cars are printed on loop
	for (int i = 0; i < numCars; i++) {
		printf("Car %d\n", i+1);
		printf("Car Make:%s\n", garage[i].make);
		printf("Car Model:%s\n", garage[i].model);
		printf("Car Year:%d\n\n", garage[i].year);
	  }
}

int checkYear(int numCars, int year) {
	int Answer = 0;
	for (int i = 0; i < numCars; i++) {
		//If the cars year equals the year requested it increments the answer counter
		if (garage[i].year == year) {
			Answer++;
		}
	}
	//Answer value is returned to main
	return Answer;
}

