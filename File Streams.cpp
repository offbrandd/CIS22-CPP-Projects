//Brandon Tytler
//105027267
//Chapter 3 Excercise 1 Page 181/182 Weekly Assignment

#include <iostream>
//exercise a.
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	cout << "Processing!" << endl;
	//excerise b.
	ifstream inFile;
	ofstream outFile;
	//exercise c.
	inFile.open("inData.txt"); //opens 'inData.txt' and associates it with inFile
	outFile.open("outData.txt"); //opens 'outData.txt' and associates it with outFile
	//exercise d.
	string firstName, lastName, department;
	double salary, bonus, tax, commuteDistance, commuteTime, cupsSold, costofCups;

	inFile >> firstName >> lastName >> department; //grab first 3 tokens from inFile and assign to corresponding variables
	inFile >> salary >> bonus >> tax >> commuteDistance >> commuteTime >> cupsSold >> costofCups; //grab remaining tokens from inFile and assign to corresponding variables
	inFile.close(); //close inFile, we are done with it.

	outFile << setprecision(2) << fixed << showpoint; //set outFile to used fixed point notation, with a precision up to 2 decimal places,and always show decimals, even if .00
	outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
	outFile << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << tax << "%" << endl;
	outFile << "Paycheck: $" << salary * (1 + bonus/100) * (1-tax/100) << endl << endl; //computes salary using gross salary, tax, and bonus, then writes to file

	outFile << "Distance Traveled: " << commuteDistance << " miles, Traveling Time: " << commuteTime << " hours" << endl;
	outFile << "Average Speed: " << commuteDistance / commuteTime << " miles per hour" << endl << endl;

	outFile << "Number of Coffee Cups Sold: " << cupsSold << ", Cost: $" << costofCups << " per cup" << endl;
	outFile << "Sales Amount = $" << cupsSold * costofCups << endl; //computes Sales Amount (amount * price)
	outFile.close(); //close outFile, we are done with it
	cout << "Done!" << endl;
	return 0;
}