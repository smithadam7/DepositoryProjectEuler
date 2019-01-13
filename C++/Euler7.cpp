// Adam Smith
// Projecteuler.net problem #7

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number ?

#include <iostream>
#include <vector>
using namespace std;

vector<int> primes;
int main()
{
	primes.push_back(2);
	for (int x = 2; x < 1000000; ++x) {
		for (int y = 2; y < x; ++y) {
			if (x % y == 0)
				break;
			if (y == (x - 1))
				primes.push_back(x);
		}
	}

	cout << primes[primes.size() - 1] << " is the last prime found in the " << primes.size()<< " pos\n";
	cout << primes[10000] << " is the prime found in the 10001st pos\n";

	cout << "\nPress Enter to Continue";
	getchar();
	return 0;
}