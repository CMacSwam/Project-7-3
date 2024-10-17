/*
*Author: Chase McCluskey
*Date: 10/17/2024
*File: LabProblem7.3
*
* Description: Finding the first, last and total number of digits in an integer 
*/

#include <iostream>

using namespace std;

int main() {
	int first(int n);
	int last_digit(int n);
	int digits(int n);

	while (!cin.fail()) {
		int number = 0;
		cout << "Enter a number or Q to quit";
		cin >> number;
		if (cin.fail()) {
			break;
		}
		int firstnumber = first(number);
		int lastnumber = last_digit(number);
		int length = digits(number);

		cout << "First digit: " << firstnumber << " Last number: " << lastnumber << " Number of digits: " << length << endl;
	}
}
int digits(int n) {

	int count = 0;

	while (n != 0) {
		n /= 10;
		count++;
	}
	return count;
}

int first(int n) {

	int divider = (digits(n) - 1);
	divider = pow(10, divider);
	cout << divider;
	n /= divider;
	return n;
}

int last_digit(int n) {

	int last = n % 10;
	return last;
}

