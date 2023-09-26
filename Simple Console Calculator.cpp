//Brandon Tytler
//105027267
//Chapter 4 Excercise 8 Page 260 Weekly Assignment

#include <iostream> //include iostream for console priting and user input
#include <cmath> //include cmath for pow() function
using namespace std; //using namespace standard

//Prompts user to input two intgers and select a math operator, then outputs the arithmetic expression with the result
int calcLoop () {
	int integer1, integer2; //arithmetic operands
	int operator_option = -1; //operator selection, starts as an invalid selection (-1)

	cout << endl << "Enter your first integer: " << endl;
	cin >> integer1;

	while (operator_option < 0 || operator_option > 4) { //loop until valid operator selection is inputted
		cout << "Select your operation: " << endl << "0. Addition" << endl << "1. Subtraction" << endl << "2. Multiplication" << endl << "3. Division" << endl << "4. Exponentiation" << endl;
		cin >> operator_option;
	}
	cout << "Enter your second integer: " << endl;
	cin >> integer2;

	switch (operator_option)
	{
		case 0:
			cout << integer1 << " + " << integer2 << " = " << integer1 + integer2 << endl;
			break;
		case 1:
			cout << integer1 << " - " << integer2 << " = " << integer1 - integer2 << endl;
			break;
		case 2:
			cout << integer1 << " * " << integer2 << " = " << integer1 * integer2 << endl;
			break;
		case 3:
			if (integer2 != 0) { //checks if user is attempting to divide by zero
				cout << integer1 << " / " << integer2 << " = " << integer1 / integer2 << " Remainder: " << integer1 % integer2 <<  endl; //provides result and remainder, because integer divsion
			}
			else {
				cout << "CANNOT DIVIDE BY ZERO" << endl; //output error message if user attempts to divide by zero
			}
			break;
		case 4:
			cout << integer1 << " ^ " << integer2 << " = " << pow(integer1, integer2) << endl; //uses pow() function from cmath to calculate exponentiation operation
			break;
	}	
	return 0;
}

int main() {
	cout << "Welcome!" << endl;
	while (true) { //Loop until user opts to quit or closes program. ideally I would check for a specified escape character at every input but that feels out of scope for this assignment
		calcLoop();
		cout << "Perform another calculation? (y or n)" << endl;
		char response = 'x'; //default value = x

		while (response != 'y') { //prompt for response until user inputs valid value
			cin >> response;
			if (response == 'n') {
				return 0;
			}
		}
	}
}