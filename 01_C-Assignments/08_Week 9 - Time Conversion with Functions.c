//Name: Timonas Samoska
//Student ID: 21326923
//Date: 23/11/21 

//Libaries
#include <stdio.h>
#include <math.h>

//Functions are declared.
float TimeChecker();
double TimeRounder(float TimeToBeRounded);
double ElectRates(double RoundedTime);
void Display(double RoundedTime, double ElectRate);

//Global variables are declared and initialized
double DayRate = 23.9;
double NightRate = 12.6;


void main() {
	//The time variable is assigned to the return of the timechecker function
	float Time = TimeChecker();
	//Current time is printed
	printf("Current time:%0.2f", Time);
	//The time is rounded using the TimeRounder result and its printed to the screen. Current time is passed into the function.
	double NewTime = TimeRounder(Time);
	printf("\nCurrent Rounded Time: %0.2f", NewTime);
	//Electricity price is assigned to this variable as the return of the electrates function. The function is also passed the rounded time variable.
	double ElectRate = ElectRates(NewTime);
	//Rounded time, electricity price and the chosen rate are passed to the display function.
	Display(NewTime, ElectRate);
	}


float TimeChecker(){
	//Variables are declared that are needed for the function
	int TimeHours;
	float TimeMinutes;
	float CurrentTime;
//Prompts the user to enter the current hour and store it in the Timehours variable
	puts("Please enter the current hour:");
	scanf_s("%d", &TimeHours);
	//If the time is greater than 24 time is set to 0, and if a minus value is entered, the current hour value is set to 0.
	(TimeHours >= 24 || TimeHours<0) ? TimeHours = 0 : TimeHours;
	//Prompts the user the enter the current minutes and assigns the value to the variable TimeMinutes.
	puts("Please enter the current minutes:");
	scanf_s("%f", &TimeMinutes);
	//If time is greater than 60, the variable is set to 59
	(TimeMinutes >= 60) ? TimeMinutes = 59 : TimeMinutes;
	//If the time is set to a minus number its set to 0.
	(TimeMinutes < 0) ? TimeMinutes = 0 : TimeMinutes;
	//Minutes are converted to hours.
	CurrentTime = (TimeMinutes/60) + TimeHours;
	return CurrentTime;
}

double TimeRounder(float TimeToBeRounded) {
	//The entered time is rounded
	double RoundedTime = round(TimeToBeRounded);
	//If the rounded time is greater than 23, its set to 0.
	(RoundedTime >= 24) ? RoundedTime = 0 : RoundedTime;
	return RoundedTime; 
}

double ElectRates(double RoundedTime) {
	//If the current time is less than 8, the chosen rate is set to the nightrate and if its not, its assigned the dayrate.
	double ChosenRate;
	(RoundedTime<= 8) ? (ChosenRate = NightRate) : (ChosenRate = DayRate);
	return ChosenRate;
}

void Display(double RoundedTime, double ElectRate) {
	//The variables rounded time and the selected rate are displayed to the user.
	printf("\nThe Electricity price at Time %.2f is %.2f c/kWh.", RoundedTime, ElectRate);
}
