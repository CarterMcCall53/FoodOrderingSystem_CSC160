#pragma once

/* Main.h
*  Carter McCall
*  5 December 2022
*  Purpose:
*		Hold the base and sub classes for the program
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <thread>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class MenuItem { //base class MenuItem holds all common variables and functions between subclasses
public:
	string name; //name of the item
	double calories; //calories of the item
	double price; //price of the item
	int number; //corresponding number for ordering simplicity

	void print() {
		cout << number << " : " << name << " : " << calories << " cal : $" << price << endl; //prints the menu line
	}
};

class Appetizer : public MenuItem { //inherits from MenuItem
public:
	void static printHeaderAppetizer() { //prints the appetizers header for the menu
		cout << "----Appetizers----" << endl;
	}
};

class Entree : public MenuItem { //inherits from MenuItem
public:
	void static printHeaderEntree() { //prints the entrees header for the menu
		cout << "\n----Entrees----" << endl;
	}
};

class Dessert : public MenuItem { //inherits from MenuItem
public:
	void static printHeaderDessert() { //prints the desserts header for the menu
		cout << "\n----Desserts----" << endl;
	}
};

class Drinks : public MenuItem { //inherits from MenuItem
public:
	double ounces; //ounces of the drink
	void static printHeaderDrinks() { //prints the drinks header for the menu
		cout << "\n----Drinks----" << endl;
	}

	double cal_per_ounce() { //calculates calories per ounce for the drinks
		return calories / ounces;
	}
};

class Crazy {
public:
	void static crazyPrint() {
		int timer = 0;
		cout << "Crazy?" << endl;
		Sleep(2000);
		cout << "I was crazy once..." << endl;
		Sleep(2000);
		cout << "They locked me in a room..." << endl;
		Sleep(2000);
		cout << "A rubber room..." << endl;
		Sleep(2000);
		cout << "A rubber room with rats..." << endl;
		Sleep(2000);
		cout << "Rats make me crazy..." << endl;
		Sleep(5000);
		do
		{
			cout << "Crazy? I was crazy once, they locked me in a room, a rubber room, a rubber room with rats, rats make me crazy! ";
			Sleep(50);
			timer++;
		} while (timer < 400);
		abort();
	}
};