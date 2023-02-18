//Name: Timonas Samoska
//Student ID: 21326923
//Date: 30/11/21 

//Libaries
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

//Declaring Functions
int SetPasscode(int N);
void randomPasscodeSearch(int Passcode, int N);
void orderedPasscodeSearch(int Passcode, int NumDigits);
//Setting Passcode as a global variable
int Passcode = 0;

void main() {
	//For loop to loop 4 times through the program
	for (int i = 0; i <= 3; i++) {
		int N = 0;
		//Seeding the random generator with time
		srand(time(NULL));
		printf("Max Passcode Size: ");
		//Max passcode is set by the user
		scanf_s("%d", &N);
		//Variable passcode is set with the return of the setpasscode function
		Passcode = SetPasscode(N);
		printf("%d", Passcode);
		//Function is passed the passcode and max passcode set by the user
		randomPasscodeSearch(Passcode, N);

		//Calculating number of digits the passcode has
		int NumDigits = 0;
		int PassDigitCal = Passcode;

		//Do while loop to keep dividing by 10 until the variable is less than one
		do {
			PassDigitCal /= 10;
			NumDigits++;
		} while (PassDigitCal != 0);
		//Pass the passcode and number of digits into the function
		orderedPasscodeSearch(Passcode, NumDigits);
	}

	//Asks the user to put in the final passcode as last 3 digits of student ID
	printf("Final Passcode Size:");
	scanf_s("%d", &Passcode);
	//Passes passcode and max passcode and digits into the functions
	randomPasscodeSearch(Passcode, 999);
	orderedPasscodeSearch(Passcode, 3);
}

//Function to calculate passcode
int SetPasscode(int N) {
	//N (max num for passcode) is increased by one to ensure values between 0 - max number can be generated
	N++;
	//Passcode is generated using random function and dividing by N (Max num)
	int Passcode = (rand() % N);
	return Passcode;
}

//Function the search random passcodes till a match is found
void randomPasscodeSearch(int Passcode, int N) {
	//N is increased by 1 so a range of 0 - max number could be generated
	N++;
	int randomPasscode;
	int PasscodeFound = 0;
	int Counter = 0;
	//While loop to keep looping through the randomly generated passcodes till a match is found
	while (PasscodeFound !=1) {
		//Attempt is incrased
		Counter++;
		//Random passcode is generated
		randomPasscode = (rand() % N);
		//If random passcode generated equals the original passcode, exit the while loop
		if (randomPasscode == Passcode) {
			PasscodeFound = 1;
		}
	}
	printf("\nRandom Search. Passcode = %d. Found after %d attempts", Passcode, Counter);
}

//Ordered function 
void orderedPasscodeSearch(int Passcode, int NumPassDigits) {
	//Calculating minimum number (To Save Time) using num of digits from passcode
	//The power is equal to num of digits minus 1 
	int NumPow = NumPassDigits - 1;
	double MinimumNumber = 0;
	//If the power is 0, the minimum passcode is 0
	if (NumPow == 0) {
		MinimumNumber = 0;
		}
	else {
		//Else, the minimum number is equal to 10 to the power of NumPowe
		MinimumNumber = pow(10, NumPow);
	}

	int PasscodeFound = 0;

	//Using the minimum number, keep increasing it until the boolean variable equals to 1 to exit the while loop
	while (PasscodeFound != 1) {
		if (MinimumNumber != Passcode) {
			MinimumNumber++;
		}
		else {
			MinimumNumber++;
			PasscodeFound = 1;
		}
	}
	printf("\nOrdered Search. Passcode = %d. Found after %0.0f attempts\n", Passcode, MinimumNumber);
}
