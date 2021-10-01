/*Mason Driskill
 CS 231
 Coin Calculator/Due 2/1/21
 Accepts integer input of change amounts from user and calculates the amount of coins into one amount
 */

#include <iostream>
using namespace std;

int main()
{
	// Variable Declaration/Assingment
	int Pennies = 1, Nickels = 5, Dimes = 10, Quarters = 25, Half_Dollars = 50, One_Dollars = 100;
	int penny_amount, nickel_amount, dime_amount, quarter_amount, halfdollar_amount, onedollar_amount;
	int valid = 1;
	double total_in_cents, total_change;

	cout << "Welcome to the Coin Calculator" << endl; 
	//While loop to check for negative number entries
	while (valid == 1)
	{
		cout << "Enter the amount of pennies in an amount greater than or equal to zero: ";
		cin >> penny_amount;
		cout << "Enter the amount of nickels in an amount greater than or equal to zero: ";
		cin >> nickel_amount;
		cout << "Enter the amount of dimes in an amount greater than or equal to zero: ";
		cin >> dime_amount;
		cout << "Enter the amount of quarters in an amount greater than or equal to zero: ";
		cin >> quarter_amount;
		cout << "Enter the amount of half-dollars in an amount greater than or equal to zero: ";
		cin >> halfdollar_amount;
		cout << "Enter the amount of one-dollar coins in an amount greater than or equal to zero: ";
		cin >> onedollar_amount;
		//If statement that either continues or breaks while loop
		if ((penny_amount < 0) || (nickel_amount < 0) || (dime_amount < 0) || (quarter_amount < 0) || (halfdollar_amount < 0) || (onedollar_amount < 0)) {
			cout << "Error: Please enter a positive number" << endl;
			valid = 1;
		}
		else {
			valid = 0;
		}
	}
	//Conversion of change amount into dollars and cents
	total_change = (double(penny_amount) * Pennies) + (double(nickel_amount) * Nickels) + (double(dime_amount) * Dimes) + (double(quarter_amount) * Quarters) + (double(halfdollar_amount) * Half_Dollars) + (double(onedollar_amount) * One_Dollars);
	total_in_cents = total_change / 100;
	cout << "Pennies: " << penny_amount << "\nNickels: " << nickel_amount << "\nDimes: " << dime_amount << "\nQuarters: " << quarter_amount << "\nHalf-Dollars: " << halfdollar_amount << "\nOne-Dollar Coins: " << onedollar_amount << endl;
	cout << "The value of all your coins is: $" << total_in_cents; 
	
}