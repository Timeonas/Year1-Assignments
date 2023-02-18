//Name: Timonas Samoska
//Student ID: 21326923
//Date: 18/1/22 

//Libaries
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include "string.h"

void main() {

	//Part 1
	printf("---------Part 1---------\n");
	//Used to define the File Pointer
	FILE* fptr;
	//Used to open to file in read mode
	fopen_s(&fptr, "C:\\Users\\burli\\OneDrive - National University of Ireland, Galway\\Desktop\\SampleData.txt", "r");

	//Used to ensure correct address is assigned to the file pointer
	if (fptr == NULL) {
		puts("File Pointer WAS NOT set correctly");
		return;
	}

	//Else print everything in file
	else {
		char c = fgetc(fptr);
		while (c != EOF) {
			printf("%c", c);
			c = fgetc(fptr);
		}
		fclose(fptr);
	}

	//Part 2
	printf("---------Part 2---------\n");

	//Struct of Variables that will be used to assign data from file to
	typedef struct {
		int Day;
		int Month;
		int Year;
		char Region[50];
		char Rep[50];
		char Item[50];
		int Units;
		float UnitCost;
		float Total;
	} Orders;

	Orders O;

	//Used to print the header line 
	char line[500];

	//Used for calculations at the end of part 2
	int NumOrders = 0;
	float TotalIncome = 0;
	float AverageOrderValue = 0;

	fopen_s(&fptr, "C:\\Users\\burli\\OneDrive - National University of Ireland, Galway\\Desktop\\SampleData.txt", "r");


	if (fptr == NULL) {
		puts("File Pointer WAS NOT set correctly");
		return;
	}
	else {
		//Header line is printed
		fgets(line, 101, fptr);
		printf("%s", line);

		//While the pointer hasnt reached the end of the file, assign data to its respective variable in the struct
		while (!feof(fptr)) {
			fscanf_s(fptr, "%d", &O.Day);
			fscanf_s(fptr, "%*c%d ", &O.Month);
			fscanf_s(fptr, "%*c%d", &O.Year);
			fscanf_s(fptr, "%s", O.Region, 45);
			fscanf_s(fptr, "%s", O.Rep, 45);
			fscanf_s(fptr, "%s", O.Item, 45);
			fscanf_s(fptr, "%d", &O.Units);
			fscanf_s(fptr, "%f", &O.UnitCost);
			fscanf_s(fptr, "%f'\n'", &O.Total);
			NumOrders++;
			TotalIncome += O.Total;

			//Print variables to console
			printf("%d/%d/%d\t%s\t%s\t%s\t%d\t%.2f\t%.2f\n", O.Day, O.Month, O.Year, O.Region, O.Rep, O.Item, O.Units, O.UnitCost, O.Total);
		}

		AverageOrderValue = TotalIncome / NumOrders;
		printf("Total Order Income: %.2f\n", TotalIncome);
		printf("Average Order Value: %.2f\n", AverageOrderValue);
		fclose(fptr);
	}
	//Part 3
	printf("---------Part 3---------\n");
	fopen_s(&fptr, "C:\\Users\\burli\\OneDrive - National University of Ireland, Galway\\Desktop\\SampleData.txt", "a");
	if (fptr == NULL) {
		puts("File Pointer WAS NOT set correctly");
		return;
	}
	else {
		//Variable with the necessary variable data is created
		Orders O = {25,1,22,"Galway","Samoska","Pen",23,19.99,459.77};
		//Necessary variables are printed to the sampledata.txt file
		fprintf(fptr,"%d/%d/%d\t%s\t%s\t%s\t%d\t%.2f\t%.2f\n", O.Day, O.Month, O.Year, O.Region, O.Rep, O.Item, O.Units, O.UnitCost, O.Total);
		printf("File Updated.");
		fclose(fptr);
	}
}
