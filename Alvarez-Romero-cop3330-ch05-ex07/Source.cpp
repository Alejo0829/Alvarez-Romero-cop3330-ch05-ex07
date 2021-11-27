#include "Header.h"
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rafael Alvarez-Romero
 */

int main() {
	double root1, root2; 
	double a, b, c, B, A;

	cout << "Enter value for a: ";
	cin >> a;
	cout << "Enter value for b: ";
	cin >> b;
	cout << "Enter value for c: ";
	cin >> c;

	B = b * b;
	A = 2 * a;

	if (B - 4 * a * c < 0) {
		cout << "The function has no real roots!";
	}
	else {
		root1 = ( - b + sqrt(B - 4 * a * c)) / A;
		root2 = ( - b - sqrt(B - 4 * a * c)) / A;
		cout << "Root 1: " << root1 << " Root 2: " << root2;
	}
	return 0;

}