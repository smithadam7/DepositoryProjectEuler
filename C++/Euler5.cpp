// Adam Smith
// Projecteuler.net problem #5

// 2520 is the smallest number that can be divided by
// each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

#include <iostream>
using namespace std;

int main()
{
	int multipleCount = 0;
	for (long long k = 0; k < 1000000000; ++k) {
		multipleCount = 0;
		for (int x = 1; x < 21; ++x) {
			if (k % 20 != 0)
				break;
			if (k % x == 0) {
				multipleCount = multipleCount + 1;
				if (multipleCount == 20)
					cout << k << endl;
			}
		}
}

	cout << "\nPress Enter to Continue";
	getchar();
	return 0;
}