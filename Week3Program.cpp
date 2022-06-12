// Week3Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main()
{


	double SHIPPINGCOST;
	double FRAGILE = 2.00;

	string item;
	string fragile;
	double orderTotal;
	string destination;

	cout << string(55, '*') << endl;
	cout << "ITCS 2530 - Programming Assignment for Week #3" << endl;
	cout << string(55, '*') << endl;


	
	//Prompts
	//Is there a better way to do the formatting?
	cout << "Please enter the item name (no spaces)";
	cout << setw(10) << setfill('.') << ": ";
	cin >> item;
	cout << endl;
	cout << "Is the item fragile? (y=yes/n=no)";
	cout << setw(15) << setfill('.') << ": ";
	cin >> fragile;
	if (fragile != "y" && fragile != "n") {
		cout << "Invalid entry, exiting...";
		exit(0);
	}
	cout << endl;
	cout << "Please enter your order total";
	cout << setw(19) << setfill('.') << ": ";
	cin >> orderTotal;
	cout << endl;
	cout << "Please enter destination";
	cout << setw(24) << setfill('.') << ": ";
	cin >> destination;
	if (destination != "usa" && destination != "USA" && destination != "CAN" && destination != "can" && destination != "AUS" && destination != "aus" && destination != "mars" && destination != "MARS") {
		cout << "Invalid entry, exiting...";
		exit(0);
	}
	cout << endl;
	//end prompts

	//defining shippingcost for USA
	if (destination == "usa" || destination == "USA") {
		if (orderTotal <= 50.00) {
			SHIPPINGCOST = 6.00;
		}
		else if (orderTotal <= 100.00) {
			SHIPPINGCOST = 9.00;
		}
		else if (orderTotal <= 150.00) {
			SHIPPINGCOST = 12.00;
		}
		else if (orderTotal > 150.00) {
			SHIPPINGCOST = 0.00;
		}
	}
	//defining shippingcost for CAN
	if (destination == "can" || destination == "CAN") {
		if (orderTotal <= 50.00) {
			SHIPPINGCOST = 8.00;
		}
		else if (orderTotal <= 100.00) {
			SHIPPINGCOST = 12.00;
		}
		else if (orderTotal <= 150.00) {
			SHIPPINGCOST = 15.00;
		}
		else if (orderTotal > 150.00) {
			SHIPPINGCOST = 0.00;
		}
	}
	//defining shippingcost for AUS
	if (destination == "aus" || destination == "AUS") {
		if (orderTotal <= 50.00) {
			SHIPPINGCOST = 10.00;
		}
		else if (orderTotal <= 100.00) {
			SHIPPINGCOST = 14.00;
		}
		else if (orderTotal <= 150.00) {
			SHIPPINGCOST = 17.00;
		}
		else if (orderTotal > 150.00) {
			SHIPPINGCOST = 0.00;
		}
	}
	//defining shippingcost for MARS
	if (destination == "mars" || destination == "MARS") {
		if (orderTotal <= 50.00) {
			SHIPPINGCOST = 100.00;
		}
		else if (orderTotal <= 100.00) {
			SHIPPINGCOST = 1400.00;
		}
		else if (orderTotal <= 150.00) {
			SHIPPINGCOST = 1700.00;
		}
		else if (orderTotal > 150.00) {
			SHIPPINGCOST = 2000.00;
		}
	}
	
	//adding to shipping cost if item is fragile
	if (fragile == "y") {
		SHIPPINGCOST = SHIPPINGCOST + FRAGILE;
	}

	//output
	transform(item.begin(), item.end(), item.begin(), ::toupper);
	transform(destination.begin(), destination.end(), destination.begin(), ::toupper);
	cout << "Your item is";
	cout << setw(29) << setfill('.') << ": " << item << endl;
	cout << "Your shipping cost is";
	cout << setw(21) << setfill('.') << ": $" << setprecision(2) << fixed << SHIPPINGCOST << endl;
	cout << "You are shipping to";
	cout << setw(22) << setfill('.') << ": " << destination << endl;
	cout << "Your total shipping costs are";
	cout << setw(13) << setfill('.') << ": $" << setprecision(2) << fixed << SHIPPINGCOST + orderTotal << endl;

	cout << "\n";
	cout << setw(25) << setfill('-') << "Thank you!" << endl;


	 

	
	
}

