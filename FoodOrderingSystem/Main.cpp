#pragma warning(disable : 4996) //had to include this disable to go past an error with the time() function on line 14

/* Main.cpp
*  Carter McCall
*  5 December 2022
*  Purpose:
*		Hold the main functional code
*/

#include "Main.h"

//gets current date to be used later on keeping track of items sold and money made on each day
string getCurrentDate() { //credit to milleniumbug on stackoverflow for this part of the code
	string date;
	time_t t = time(0);
	tm* now = localtime(&t);
	date = to_string(now->tm_year + 1900) + '-'
		+ to_string(now->tm_mon + 1) + '-'
		+ to_string(now->tm_mday) + ".txt";
	return date;
}

//holds all the instances of appetizers for the "menu"
void appetizers() {
	Appetizer buffalo_wings;

	buffalo_wings.name = "Buffalo Wings";
	buffalo_wings.price = 15.95;
	buffalo_wings.calories = 1000;
	buffalo_wings.number = 1;

	Appetizer skillet_cornbread;

	skillet_cornbread.name = "Skillet Cornbread";
	skillet_cornbread.price = 7.95;
	skillet_cornbread.calories = 120;
	skillet_cornbread.number = 2;

	Appetizer coconut_shrimp;

	coconut_shrimp.name = "Coconut Shrimp";
	coconut_shrimp.price = 13.95;
	coconut_shrimp.calories = 270;
	coconut_shrimp.number = 3;

	Appetizer calamari;

	calamari.name = "Calamari";
	calamari.price = 14.95;
	calamari.calories = 175;
	calamari.number = 4;

	Appetizer hot_artichoke_dip;

	hot_artichoke_dip.name = "Hot Artichoke Dip";
	hot_artichoke_dip.price = 11.95;
	hot_artichoke_dip.calories = 180;
	hot_artichoke_dip.number = 5;

	Appetizer::printHeaderAppetizer();

	buffalo_wings.print();
	skillet_cornbread.print();
	coconut_shrimp.print();
	calamari.print();
	hot_artichoke_dip.print();
}

//hold all the instances of entrees for the "menu"
void entrees() {
	Entree angelhair_pasta;

	angelhair_pasta.name = "Angelhair Pasta";
	angelhair_pasta.price = 19.95;
	angelhair_pasta.calories = 1000;
	angelhair_pasta.number = 6;

	Entree house_caesar;

	house_caesar.name = "House Caesar Salad";
	house_caesar.price = 10.95;
	house_caesar.calories = 95;
	house_caesar.number = 7;

	Entree haystack_chicken_sandwhich;

	haystack_chicken_sandwhich.name = "Haystack Chicken Sandwhich";
	haystack_chicken_sandwhich.price = 15.95;
	haystack_chicken_sandwhich.calories = 1000;
	haystack_chicken_sandwhich.number = 8;

	Entree cheeseburger;

	cheeseburger.name = "Colorado Cheeseburger";
	cheeseburger.price = 15.95;
	cheeseburger.calories = 1000;
	cheeseburger.number = 9;

	Entree bison_burger;

	bison_burger.name = "Bison Burger";
	bison_burger.price = 17.95;
	bison_burger.calories = 1000;
	bison_burger.number = 10;

	Entree::printHeaderEntree();

	angelhair_pasta.print();
	house_caesar.print();
	haystack_chicken_sandwhich.print();
	cheeseburger.print();
	bison_burger.print();
}

//holds all the instances of desserts for the "menu"
void desserts() {
	Dessert ice_cream;

	ice_cream.name = "Ice Cream";
	ice_cream.price = 4.95;
	ice_cream.calories = 1500;
	ice_cream.number = 11;

	Dessert bread_pudding;

	bread_pudding.name = "Bread Pudding";
	bread_pudding.price = 6.95;
	bread_pudding.calories = 300;
	bread_pudding.number = 12;

	Dessert creme_brulee;

	creme_brulee.name = "Creme Brulee";
	creme_brulee.price = 6.95;
	creme_brulee.calories = 285;
	creme_brulee.number = 13;

	Dessert scotcharoo_skillet_cookie;

	scotcharoo_skillet_cookie.name = "Scotcharoo Skillet Cookie";
	scotcharoo_skillet_cookie.price = 7.95;
	scotcharoo_skillet_cookie.calories = 400;
	scotcharoo_skillet_cookie.number = 14;

	Dessert key_lime_pie;

	key_lime_pie.name = "Key Lime Pie";
	key_lime_pie.price = 6.95;
	key_lime_pie.calories = 450;
	key_lime_pie.number = 15;

	Dessert::printHeaderDessert();

	ice_cream.print();
	bread_pudding.print();
	creme_brulee.print();
	scotcharoo_skillet_cookie.print();
	key_lime_pie.print();
}

//holds all the instances of drinks for the "menu"
void drinks() {
	Drinks root_beer;

	root_beer.name = "Root Beer";
	root_beer.price = 2.95;
	root_beer.calories = 200;
	root_beer.ounces = 15;
	root_beer.number = 16;

	Drinks coffee;

	coffee.name = "Coffee";
	coffee.price = 2.75;
	coffee.calories = 1;
	coffee.ounces = 8;
	coffee.number = 17;

	Drinks iced_tea;

	iced_tea.name = "Iced Tea";
	iced_tea.price = 2.75;
	iced_tea.calories = 90;
	iced_tea.ounces = 8;
	iced_tea.number = 18;

	Drinks lemonade;

	lemonade.name = "Lemonade";
	lemonade.price = 2.75;
	lemonade.calories = 100;
	lemonade.ounces = 8;
	lemonade.number = 19;

	Drinks hot_chocolate;

	hot_chocolate.name = "Hot Chocolate";
	hot_chocolate.price = 2.75;
	hot_chocolate.calories = 200;
	hot_chocolate.ounces = 8;
	hot_chocolate.number = 20;

	Drinks::printHeaderDrinks();

	root_beer.print();
	cout << '\t' << "cal/ounce : " << root_beer.cal_per_ounce() << endl;
	coffee.print();
	cout << '\t' << "cal/ounce : " << coffee.cal_per_ounce() << endl;
	iced_tea.print();
	cout << '\t' << "cal/ounce : " << iced_tea.cal_per_ounce() << endl;
	lemonade.print();
	cout << '\t' << "cal/ounce : " << lemonade.cal_per_ounce() << endl;
	hot_chocolate.print();
	cout << '\t' << "cal/ounce : " << hot_chocolate.cal_per_ounce() << endl;
}

//main functionality of the program
int main() {
	const double SALES_TAX = 0.07;
	bool cont = false;
	int input, itemsSoldToday = 0, moneyMadeToday = 0;
	double currentCost = 0, currentCalories = 0, tip, tax, tipPercent;
	vector<string> currentOrder;
	vector<int> itemCalories;
	vector<double> itemCost;
	char repChar = 'n';
	string repInput, dateFile = getCurrentDate();
	ifstream inFile;
	ofstream outFile;

	inFile.open(dateFile);
	if (inFile) inFile >> itemsSoldToday >> moneyMadeToday; //reads 2 values from dateFile
	inFile.close();

	do {
		system("cls"); //clears screen and prints the formatted menu
		appetizers();
		entrees();
		desserts();
		drinks();

		cout << endl;

		cout << "\n----Your Order----" << endl; //prints the current order, including individual calories, total calories, individual costs and total cost
		for (int i = 0; i < currentOrder.size(); i++)
		{
			cout << currentOrder[i] << " : " << itemCalories[i] << " cal : $" << itemCost[i] << endl;
		}
		cout << "\n --Total--\n";
		cout << '$' << currentCost << endl;
		cout << currentCalories << " cal" << endl;

		cout << "\n\nWhat would you like to purchase? (Please Enter the Corresponding Number): ";
		cin >> input;

		switch (input) { //adds to vectors/variables depending on what food they selected
		case 0:
			continue;
		case 1:
			currentCost += 15.95;
			currentCalories += 1000;
			currentOrder.push_back("Buffalo Wings");
			itemCost.push_back(15.95);
			itemCalories.push_back(1000);
			break;
		case 2:
			currentCost += 7.95;
			currentCalories += 120;
			currentOrder.push_back("Skillet Cornbread");
			itemCost.push_back(7.95);
			itemCalories.push_back(120);
			break;
		case 3:
			currentCost += 13.95;
			currentCalories += 270;
			currentOrder.push_back("Coconut Shrimp");
			itemCost.push_back(13.95);
			itemCalories.push_back(270);
			break;
		case 4:
			currentCost += 14.95;
			currentCalories += 170;
			currentOrder.push_back("Calamari");
			itemCost.push_back(14.95);
			itemCalories.push_back(170);
			break;
		case 5:
			currentCost += 11.95;
			currentCalories += 180;
			currentOrder.push_back("Hot Artichoke Dip");
			itemCost.push_back(11.95);
			itemCalories.push_back(180);
			break;
		case 6:
			currentCost += 19.95;
			currentCalories += 1000;
			currentOrder.push_back("Angelhair Pasta");
			itemCost.push_back(19.95);
			itemCalories.push_back(1000);
			break;
		case 7:
			currentCost += 10.95;
			currentCalories += 95;
			currentOrder.push_back("House Caesar Salad");
			itemCost.push_back(10.95);
			itemCalories.push_back(95);
			break;
		case 8:
			currentCost += 15.95;
			currentCalories += 1000;
			currentOrder.push_back("Haystack Chicken Sandwhich");
			itemCost.push_back(15.95);
			itemCalories.push_back(1000);
			break;
		case 9:
			currentCost += 15.95;
			currentCalories += 1000;
			currentOrder.push_back("Colorado Cheeseburger");
			itemCost.push_back(15.95);
			itemCalories.push_back(1000);
			break;
		case 10:
			currentCost += 17.95;
			currentCalories += 1000;
			currentOrder.push_back("Bison Burger");
			itemCost.push_back(17.95);
			itemCalories.push_back(1000);
			break;
		case 11:
			currentCost += 4.95;
			currentCalories += 1500;
			currentOrder.push_back("Ice Cream");
			itemCost.push_back(19.95);
			itemCalories.push_back(1500);
			break;
		case 12:
			currentCost += 6.95;
			currentCalories += 300;
			currentOrder.push_back("Bread Pudding");
			itemCost.push_back(6.95);
			itemCalories.push_back(300);
			break;
		case 13:
			currentCost += 6.95;
			currentCalories += 285;
			currentOrder.push_back("Creme Brulee");
			itemCost.push_back(6.95);
			itemCalories.push_back(285);
			break;
		case 14:
			currentCost += 7.95;
			currentCalories += 400;
			currentOrder.push_back("Scotcharoo Skillet Cookie");
			itemCost.push_back(7.95);
			itemCalories.push_back(400);
			break;
		case 15:
			currentCost += 6.95;
			currentCalories += 450;
			currentOrder.push_back("Key Lime Pie");
			itemCost.push_back(6.95);
			itemCalories.push_back(450);
			break;
		case 16:
			currentCost += 2.95;
			currentCalories += 200;
			currentOrder.push_back("Root Beer");
			itemCost.push_back(2.95);
			itemCalories.push_back(200);
			break;
		case 17:
			currentCost += 2.75;
			currentCalories += 1;
			currentOrder.push_back("Coffee");
			itemCost.push_back(2.75);
			itemCalories.push_back(1);
			break;
		case 18:
			currentCost += 2.75;
			currentCalories += 90;
			currentOrder.push_back("Iced Tea");
			itemCost.push_back(2.75);
			itemCalories.push_back(90);
			break;
		case 19:
			currentCost += 2.75;
			currentCalories += 100;
			currentOrder.push_back("Lemonade");
			itemCost.push_back(2.75);
			itemCalories.push_back(100);
			break;
		case 20:
			currentCost += 2.75;
			currentCalories += 200;
			currentOrder.push_back("Hot Chocolate");
			itemCost.push_back(2.75);
			itemCalories.push_back(200);
			break;
		}
		do
		{
			system("cls"); //prints screen and prints the formatted menu
			appetizers();
			entrees();
			desserts();
			drinks();

			cout << endl;

			cout << "\n----Your Order----" << endl; //prints the current order, including individual calories, total calories, individual costs and total cost
			for (int i = 0; i < currentOrder.size(); i++)
			{
				cout << currentOrder[i] << " : " << itemCalories[i] << " cal : $" << itemCost[i] << endl;
			}
			cout << "\n --Total--\n";
			cout << '$' << currentCost << endl;
			cout << currentCalories << " cal" << endl;

			cout << "\nWould you like anything else? (Y|N): "; //checks if user wants to add anything else to their order
			cin >> repInput;
			repChar = tolower(repInput[0]);
		} while (repChar != 'y' && repChar != 'n');
	} while (repChar == 'y');

	tax = currentCost * SALES_TAX; //calculates the tax of the order BEFORE TIP but doesn't at tax to the order cost yet

	cout << "What % tip would you like to add? (0.XX): "; //asks user for tip percentage and calculates tip
	cin >> tipPercent;
	tip = currentCost * tipPercent;

	currentCost = currentCost + tax + tip; //adds tip and tax to the total cost

	system("cls");

	cout << "\n----Your Order----" << endl; //prints the current order, including individual calories, total calories, individual costs and total cost, adding tax and tip now
	for (int i = 0; i < currentOrder.size(); i++)
	{
		cout << currentOrder[i] << " : " << itemCalories[i] << " cal : $" << itemCost[i] << endl;
	}
	cout << '$' << tip << " tip" << endl;
	cout << '$' << fixed << setprecision(2) << tax << " tax" << endl;
	cout << "\n --Total--\n";
	cout << '$' << fixed << setprecision(2) << currentCost << endl;
	cout << currentCalories << " cal" << endl;

	moneyMadeToday += currentCost; //adds the total cost of the meal to moneyMadeToday
	itemsSoldToday += currentOrder.size(); //adds the amount of items in the order to itemsSoldToday

	outFile.open(dateFile);
	if (outFile) outFile << itemsSoldToday << moneyMadeToday; //outputs itemsSoldToday and moneyMadeToday to dateFile (yyyy-mm-dd.txt)
	outFile.close();
}
