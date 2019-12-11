//Jhon Raimund Aclan

/*****************************************************************
//				*** SCIENTIFIC CALCULATOR ***					//
******************************************************************
//																//
//	This is a simple scientific calculator programmed in C++.	//
//	It has all the functionalities of a scientific calculator	//
//	allowing you to choose from the following Operations, in a  //
//	Triginometric, and Logmarithic functions. The program runs  //
//	do-while loop and will continue to execute as long as the	//
//	condition inside the loop holds true.						//
//																//
*****************************************************************/

//Declare header files
#include <iostream>
#include <iomanip>		//Function to control the format input and output
#include <cstdlib>		//For system("CLS"); to clear output
#include <cmath>		//set of functions to compute common mathematical operations
#include <math.h>
#include <string>   //For holding string information
using namespace std;

//Declare prototype functions
void addition()		//Addition function
{
	system("CLS");			//Clears screen
	double x, y, answer;
	cout << "\n\t** ADDITION **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the first number:\n";
	cin >> x;
	cout << "\nEnter the second number:\n";
	cin >> y;
	answer = x + y;
	cout << x << " + " << y << " = " << answer << endl;
	return;
}
void subtraction()		//Subtraction function
{
	system("CLS");			//Clears screen
	double x, y, answer;
	cout << "\n\t** SUBTRACTION **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the first number:\n";
	cin >> x;
	cout << "\nEnter the second number:\n";
	cin >> y;
	answer = x - y;
	cout << x << " - " << y << " = " << answer << endl;
}
void division()		//Division function
{
	system("CLS");			//Clears screen
	double x, y, answer;
	cout << "\n\t** DIVISION **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the first number:\n";
	cin >> x;
	cout << "\nEnter the second number:\n";
	cin >> y;
	answer = x / y;
	cout << x << " / " << y << " = " << answer << endl;
}
void multiplication()	//Multiplication function
{
	system("CLS");			//Clears screen
	double x, y, answer;
	cout << "\n\t** MULTIPLICATION **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the first number:\n";
	cin >> x;
	cout << "\nEnter the second number:\n";
	cin >> y;
	answer = x * y;
	cout << x << " x " << y << " = " << answer << endl;
}
void exponent()		//Exponent function
{
	system("CLS");			//Clears screen
	double x, answer;
	cout << "\n\t** EXPONENT **" << endl;
	cout << "-------------------------------\n";
	cout << "\nEnter the first number:\n";
	cin >> x;
	answer = exp(x);
	cout << "\nThe exponential value of " << x << " is: " << answer << endl;
}
void root()			//Square root functiom
{
	system("CLS");			//Clears screen
	double x, answer;
	cout << "\n\t** SQUARE ROOT **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to square:\n";
	cin >> x;
	answer = sqrt(x);
	cout << "\nThe sqaure root of the given number is: " << answer << endl;
}
void power()			//Power functiom
{
	system("CLS");			//Clears screen
	double x, y, answer;
	cout << "\n\t** POWER **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the base number:\n";
	cin >> x;
	cout << "\nEnter the power value:\n" << endl;
	cin >> y;
	answer = (pow(x, y));
	cout << "\nThe power value of the given base number is: " << answer << endl;
}
void sine()			//Sine function
{
	system("CLS");			//Clears screen
	double x, answer;
	double PI = 3.1415927;
	cout << "\n\t** SINE **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to find its sine:\n";
	cin >> x;
	answer = sin(x * PI / 180);
	cout << "\nThe sine of the given number is: " << answer << endl;
}
void cosine()			//Cosine function
{
	system("CLS");			//Clears screen
	double x, answer;
	double PI = 3.1415927;
	cout << "\n\t** COSINE **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to find its cosine:\n";
	cin >> x;
	answer = cos(x * PI / 180);
	cout << "\nThe cosine of the given number is: " << answer << endl;
}
void tangent()			//Tangent function
{
	system("CLS");			//Clears screen
	double x, answer;
	double PI = 3.1415927;
	cout << "\n\t** TANGENT **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to find its tangent:\n";
	cin >> x;
	answer = tan(x * PI / 180);
	cout << "\nThe tangent of the given number is: " << answer << endl;
}
void cosecant()		//Cosecant function
{
	system("CLS");			//Clears screen
	double x, answer;
	double PI = 3.1415927;
	cout << "\n\t** COSECANT **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to find its cosecant:\n";
	cin >> x;
	answer = 1 / sin(x * PI / 180);
	cout << "\nThe cosecant of the given number is: " << answer << endl;
}
void secant()			//Secant function
{
	system("CLS");			//Clears screen
	double x, answer;
	double PI = 3.1415927;
	cout << "\n\t** SECANT **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to find its secant:\n";
	cin >> x;
	answer = 1 / cos(x * PI / 180);
	cout << "\nThe secant of the given number is: " << answer << endl;
}
void cotangent()		//Cotangent function
{
	system("CLS");			//Clears screen
	double x, answer;
	double PI = 3.1415927;
	cout << "\n\t** COTANGENT **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number to find its cotangent:\n";
	cin >> x;
	answer = 1 / tan(x * PI / 180);
	cout << "\nThe cotangent of the given number is: " << answer << endl;
}
void log()				//Log function
{
	system("CLS");			//Clears screen
	double x, answer;
	cout << "\n\t** LOG **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number:\n";
	cin >> x;
	answer = log(x);
	cout << "\nThe value of log is: " << answer << endl;
}
void logBase()			//Log with base 10 function
{
	system("CLS");			//Clears screen
	double x, answer;
	cout << "\n\t** LOG BASE 10 **\n";
	cout << "-------------------------------\n";
	cout << "\nEnter the number:\n";
	cin >> x;
	answer = log10(x);
	cout << "\nThe value of log base 10 is: " << answer << endl;
}

int main()
{
	//Declare and initialize variables
	int choice;
	char restart;
	bool loop = 1;

	do {
		system("CLS");			//Clears screen

		//Menu of Scientific calculator
		cout << "-----------------------------------------------------------------------------\n";
		cout << "*							SCIENTIFIC CALCULATOR							 *\n";
		cout << "-----------------------------------------------------------------------------\n";
		cout << "Operations\t" << "\tTrigonometric Functions" << "\t\tLogarithmic Functions\n";
		cout << "-----------------------------------------------------------------------------\n";
		cout << "1: Addition\t\t" << "8: Sin\t\t" << "\t\t14: Log" << endl;
		cout << "2: Subtraction\t\t" << "9: Cos\t\t" << "\t\t15: Log with base 10" << endl;
		cout << "3: Division\t\t" << "10: Tan\t\t" << endl;
		cout << "4: Multiplication\t" << "11: Cosecant\t\t" << endl;
		cout << "5: Exponent\t\t" << "12: Secant\t\t" << endl;
		cout << "6: Square root\t\t" << "13: Cotangent\t\t" << endl;
		cout << "7: Power\t\t" << endl;
		cout << "-----------------------------------------------------------------------------\n";
		cout << "Enter the function that you want to perform : ";
		cin >> choice;

		if (choice == 1)
			addition();					//Calls addition function
		else if (choice == 2)
			subtraction();				//Calls subtraction function
		else if (choice == 3)
			division();					//Calls subtraction function
		else if (choice == 4)
			multiplication();			//Calls multiplication function
		else if (choice == 5)
			exponent();					//Calls exponent function
		else if (choice == 6)
			root();						//Calls square root functiom
		else if (choice == 7)
			power();					//Calls power functiom
		else if (choice == 8)
			sine();						//Calls sine function
		else if (choice == 9)
			cosine();					//Calls cosine function
		else if (choice == 10)
			tangent();					//Calls tangent function
		else if (choice == 11)
			cosecant();					//Calls cosecant function
		else if (choice == 12)
			secant();					//Calls secant function
		else if (choice == 13)
			cotangent();				//Calls cotangent function
		else if (choice == 14)
			log();						//Calls log function
		else if (choice == 15)
			logBase();					//Calls log with base 10 function

		cout << endl;
		cout << "-------------------------------\n";
		cout << "\nWould you like to start over?\n";
		cout << "\tY or N?\n";
		cin >> restart;
		cout << endl;
		if (restart == 'n' || restart == 'N')
			loop = 0;
	} while (loop);
	return 0;
}