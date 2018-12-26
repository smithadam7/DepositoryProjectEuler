// Adam Smith
// Projecteuler.net problem #4

// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3 - digit numbers.

#include <iostream>
#include <vector>
using namespace std;

vector<int> palindromes;

bool checkPal(int pal) {
	int original, digit;
	int reverse = 0;
	original = pal;

	do {
		digit = pal % 10;
		reverse = (reverse * 10) + digit;
		pal = pal / 10;
	} while (pal != 0);

	if (original == reverse)
		return true;
	else
		return false;
}

void createPal(int num1, int num2) {
	for (int j = 0; j < 999; ++j) {
		for (int i = 0; i < 999; ++i) {
			int product = (num1 * num2);
			--num1;
			if (checkPal(product)) {
				//cout << product << endl;
				palindromes.push_back(product);
				break;
			}
		}
		num1 = 999;
		--num2;
	}
}

int main()
{
	createPal(999, 999);
	int largestPal = 0;

	for (int k = 0; k < palindromes.size(); ++k) {
		if (largestPal < palindromes[k])
			largestPal = palindromes[k];
	}
	cout << largestPal << endl;

	cout << "\nPress Enter to Continue";
	getchar();
	return 0;
}