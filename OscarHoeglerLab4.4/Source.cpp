/*Oscar Hogler, September 15 2022, Laboratory 4.1
 *OscarHoeglerLab4.1.cpp, Take int temperature and return wether liquid would be solid liquid or gas */

#include <iostream>
#include <string>

using namespace std;

int main(void) { 
	
	double total, given;
	int change,dollar,quarter,nickel,dime,penny;

	cout << "What is your total today? "; cin >> total;
	cout << "What will you be paying with today? "; cin >> given;

	total *= 100;
	given *= 100;
	change = given - total;
	cout << "change due is $" << (double)(change) / 100 << endl;
	if (change / 100 >= 1) {
		if (change / 100 > 1) {
			cout << change / 100 << " dollars" << endl;
		} else { cout << "1 dollar" << endl;}
		change = change % 100;
	}
	if (change / 25 >= 1) {
		if (change / 25 > 1) {
			cout << change / 25 << " quarters" << endl;
		}
		else { cout << "1 quarter" << endl; }
		change = change % 25;
	}
	if (change / 10 >= 1) {
		if (change / 10 > 1) {
			cout << change / 10 << " dimes" << endl;
		}
		else { cout << "1 dime" << endl; }
		change = change % 10;
	}
	if (change / 5 >= 1) {
		if (change / 5 > 1) {
			cout << change / 5 << " nickels" << endl;
		}
		else { cout << "1 nickel" << endl; }
		change = change % 5;
	}
	if (change / 1 >= 1) {
		if (change / 1 > 1) {
			cout << change / 1 << " pennies" << endl;
		}
		else { cout << "1 penny" << endl; }
		change = change % 1;
	}



	
	
	
	return 0;
}