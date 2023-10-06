//Brandon Tytler
//105027267
//Chapter 5 Excercise 8 Page 341 Weekly Assignment

#include <iostream> //include iostream for console priting and user input
#include <cmath> //include cmath for pow() function
using namespace std; //using namespace standard

int main() {
	//problem a)
	int firstNum, secondNum;
	bool validNumbers = false;
	while (!validNumbers) { //loop until two integers input, first integer must be less than second
		cout << "Enter first number:" << endl;
		cin >> firstNum;
		cout << "Enter second number:" << endl;
		cin >> secondNum;
		if (firstNum < secondNum) {
			validNumbers = true;
			break;
		}
		cout << "First number must be less than second number. Please try again" << endl;
	}
	//problem b, c, and part of E)
	int i = firstNum; //iterator starting at firstNum
	int evenSum = 0; //to keep track of the sum of all even numbers for problem c
	int oddSquareSum = 0;
	cout << "Odd numbers between " << firstNum << " and " << secondNum << ":" << endl;
	while (i < secondNum) {
		if (i % 2 == 0) {
			evenSum += i; //add evens to even sum for problem c
		}
		else {
			cout << i << ", "; //output odds for problem b
			oddSquareSum += pow(i, 2); //add square of odd number to oddSquareSum for problem e
		}

		i++;
	}
	cout << endl << "The sum of all even numbers between " << firstNum << " and " << secondNum << ": " << evenSum << endl;
	//problem d)
	i = 1; //just going to use the same iterator here.
	cout << "Here are the numbers between 1-10 and their squares: " << endl;
	while (i <= 10) {
		cout << i << " ^ 2 = " << pow(i, 2) << endl;
		i++;
	}

	//problem e (see earlier code for more details)
	cout << "Here is the sum of the square of all odd numbers between " << firstNum << " and " << secondNum << ": " << oddSquareSum << endl;
	//problem f)
	i = 65; //65 is the ASCII decimal value for the uppercase 'A'
	cout << "Here are all uppercase letters, for some reason: ";
	while (i <= 90) {//goes until 90, the ASCII decimal value for uppercase 'Z'
		cout << char(i);
		if (i < 90) {
			cout << ", "; //comma for formatting, exlcudes 'Z'
		}
		i++;
	}
	return 0;
}