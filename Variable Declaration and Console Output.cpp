//Brandon Tytler
//105027267
//Chapter 2 Exercise 3 Page 115 weekly assignment

#include <iostream> //exercise a (preprocessor directive to include iostream to output to console)
using namespace std; // exercise b. (use namespace standard)

int main() {
	//exercise c. (declare integer variables
	int num1, num2, num3, average;
	//excerise d. (initialize integer variables 'num1', 'num2', 'num3' with textbook provided values
	num1 = 125;
	num2 = 28;
	num3 = -25;
	//exercise e. (initialize interger varaible 'average' with the value of the mean of num1, num2, and num3
	average = (num1 + num2 + num3) / 3;
	//exercisee f. (output all initialized integers to the console
	cout << "num1: " << num1 << " num2: " << num2 << " num3: " << num3 << " average: " << average << endl;
	return 0;
}

