// Adam Smith
// Projecteuler.net problem #6

// The sum of the squares of the first ten natural numbers is, 1 ^ 2 + 2 ^ 2 + ... + 10 ^ 2 = 385
// The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10) ^ 2 = 55 ^ 2 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers
// and the square of the sum is 3025 − 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include <iostream>
using namespace std;

int main()
{
	int sumOfSquares = 0;
	int squareOfSum = 0;
	int numsum = 0;
	int difference = 0;

	for (int x = 0; x < 101; ++x) {
		sumOfSquares += x * x;
	}

	for (int y = 0; y < 101; ++y) {
		numsum += y;
	}

	squareOfSum = numsum * numsum;
	difference = squareOfSum - sumOfSquares;
	cout << difference << endl;

	cout << "\nPress Enter to Continue";
	getchar();
	return 0;
}