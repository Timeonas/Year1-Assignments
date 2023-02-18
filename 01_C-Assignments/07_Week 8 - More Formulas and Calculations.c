//Name: Timonas Samoska
//Student ID: 21326923
//Date: 16/11/21

// Including the libraries needed
#include <stdio.h>
#include <string.h>


//Functions that are going to be used in program:

//Pool Calculator function used to calculate the Mass of the Pool. This function will return a float value
float PoolCal(float Length, float Width, float Height);
//This function is used to calculate the Mass of the water in the pool.
void WaterMassCal(float Volume);
//This function is used to calculate how many barrels can be filled with the volume of the pool. 
int BarrelCal(float Volume);

void main() {
	//The Length, Width and Height of the pool are declared based my Student ID
	float PoolL = 9, PoolW = 2, PoolH = 3;

	//The variable PoolVol will be assigned whatever value the function PoolCal returns.
	float PoolVol = PoolCal(PoolL, PoolW, PoolH);

	//The water mass calculator is run with the Pool volume as a parameter. 
	WaterMassCal(PoolVol);

	//Volume of water is printed
	printf("\nThe volume of the Pool is: %.2f m^3.", PoolVol);

	//The variable barrels is assigned whatever value the function BarrelCal returns.
	int Barrels = BarrelCal(PoolVol);
	//Number of Barrels is printed.
	printf("\nThe amount of FULL barrels: %d", Barrels);
}

//Function for calculating the pool volume
float PoolCal(float Length, float  Width, float Height) {

	//Formula for calculating the Pool volume
	float Vol = (Length * Width * Height);
	//Returns the value for the volume
	return Vol;
}

//Function for calculating the water mass with the pool volume as a parameter
void WaterMassCal(float PoolVol) {
	//Formula for calculating the Water Mass in the pool
	float WaterMass = PoolVol * 1000;
	printf("The mass of Water is: %.2f kg.", WaterMass);
}
//The barrel calculator function with the volume of the pool as a parameter. This function returns an int in order to only include full barrels. 
int BarrelCal(float Volume) {
	//Formula for determing how many barrels can be filled with the volume of the pool.
	double TotalBarrel = Volume / 0.48;
	//The number of FULL barrels are returned.
	return TotalBarrel;
}
