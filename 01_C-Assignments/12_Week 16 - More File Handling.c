//Name: Timonas Samoska
//Student ID: 21326923
//Date: 1/2/22 

//Libaries
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <string.h>

void main() {
//Part 1
	//Used to define the File Pointer
	FILE* fptr1;
	//Used to open to file in read mode
	fopen_s(&fptr1, "C:\\Users\\burli\\OneDrive - National University of Ireland, Galway\\Desktop\\dogs.txt", "r+");

	//If there is no error with the file pointer, find the length of the file
	if (fptr1 != NULL) {
		//fseek is used to send the file pointer to the end of the file
		fseek(fptr1, 0, SEEK_END);
		//A variable is assigned to hold the valuable of the file pointers position
		int DogLen = ftell(fptr1);
		printf("Size of dogs.txt: %d bytes.\n", DogLen);
	//Part 2
		//Sets the file pointer 3 places before the end
		fseek(fptr1, -3, SEEK_END);
		//Replaces Pug with Boxer
		fputs("Boxer", fptr1);
		fclose(fptr1);
	}

	//Part 3 
	FILE* fptr2;
	fopen_s(&fptr2, "C:\\Users\\burli\\OneDrive - National University of Ireland, Galway\\Desktop\\countries.txt", "r+");

	//Struct of Variables that will be used to assign data from file to
	char Country[100];
	char Line[500];
	int Population = 0;


	if (fptr2 != NULL) {
		//Variables Used to loop through the country and Line arrays
		int i = 0, j = 0;
	//While the pointer hasnt reached the end of the file, assign current character to the arrays
		while (!feof(fptr2)) {
			//Entire file data is sent to the line variable
			fgets(Line, 500, fptr2);
			//While the current position in the Line array is not a tab, continue constructing the string
			while (Line[i] != '\t') {
				//Replace the current country array position with that letter in the line array
				Country[j] = Line[i];
				//Counters are incremented
				i++;
				j++;
			}
			//Once tab is reached, \0 is used to declare the end of the string
			Country[j] = '\0';
			i++;
			j = 0;

			//Population value is parsed from the Line array and converted from a string to an integer
			Population = atoi(&Line[i]);
			//Print variables to console
			printf("Country: %s,\t\tPopulation: %d\n", Country, Population);
			//Counters are reset when finishing printing a line in the file
			i = 0, j = 0;
		}
		//Part 4
		//Setting Turkey's Population 
		Population = 84000000;
		//Using strcpy to assign turkey to the character array
		strcpy_s(Country, 7,"Turkey");
		//Fprintf is used to append the file and insert new data
		fprintf(fptr2, "\n%s\t%d", Country, Population);
		fclose(fptr2);
	}


}
