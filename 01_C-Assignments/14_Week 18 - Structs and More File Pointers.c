
#include <stdio.h>
#include <math.h> 
#include <stdlib.h>

//Structure for transactions
typedef struct {
	int day, month, year;
} date;

//Structure for each customer
typedef struct {
	char name[50];
	int accountNumber;
	double balance;
	date lastTrans;
} customer;

//Functions declared
void getCustomerName(customer* cptr);
void getAccountNumber(customer* cptr);
void getLastTransDate(customer* cptr);
void getBalance(customer* cptr);
void printCustomer(customer* cptr);

void main() {
	int i;
	char temp[100];
	customer customers[3];
	//Looping through each customer and running the functions needed
	for (i = 0; i < 3; i++) {
		getCustomerName(&customers[i]);
		getAccountNumber(&customers[i]);
		getLastTransDate(&customers[i]);
		getBalance(&customers[i]);
		gets_s(temp, 100);
		printf("\n");
	}
	printf("\n\n%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number",
		"Balance", "Date of Last Transaction");
	//Each customers data is printed
	for (i = 0; i < 3; i++) {
		printCustomer(&customers[i]);
	}
}

void getCustomerName(customer* cptr) {
	printf("Enter Customer Name:");
	//Pointer is dereferenced to access the data member within the structure
	scanf_s("%s", cptr->name, 5);
}

void getAccountNumber(customer* cptr) {
	printf("Enter Account Number:");
	//Pointer is dereferenced to access the data member within the structure
	scanf_s("%d", &cptr->accountNumber);
}

void getLastTransDate(customer* cptr) {
	printf("Enter Last Transaction Date in format dd/mm/yyyy:");
	scanf_s("%d%*c%d%*c%d", &cptr->lastTrans.day, &cptr->lastTrans.month, &cptr->lastTrans.year);
}

void getBalance(customer* cptr) {
	printf("Enter Current Balance:");
	scanf_s("%lf", &cptr->balance);
}

void printCustomer(customer* cptr) {
	//Each customers variables are printed to the screen
	printf("%25s\t%13d\t%12.2f\t%d/%d/%d\n", cptr->name, cptr->accountNumber, cptr->balance, cptr->lastTrans.day, cptr->lastTrans.month, cptr->lastTrans.year);
}
