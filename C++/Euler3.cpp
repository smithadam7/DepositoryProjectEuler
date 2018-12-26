// Adam Smith
// Projecteuler.net problem #3

// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <vector>
using namespace std;

vector<long long> factors;
vector<long long> primeFactors;
bool isPrime = true;
long long numa = 600851475143;
long long numb = 13195893333;

void findFactors(long long a) {
	for (long long i = 1; i < a; ++i) {
		if (a % i == 0) {
			factors.push_back(i);
		}
	}
};

void checkPrime(long long n) {
	for (long long j = 2; j <= n / 2; ++j) {
		if (n % j == 0) {
			isPrime = false;
			break;
		}
	}
}

void findPrimes(vector<long long> &a) {
	for (long long i = 1; i < a.size(); ++i) {
		checkPrime(a[i]);
		if (isPrime)
			primeFactors.push_back(a[i]);
	}
}

int main()
{
	findFactors(numa);
	findPrimes(factors);

	for (int k = 0; k < primeFactors.size(); ++k) {
		cout << primeFactors[k] << endl;
	}

	cout << "\nPress Enter to Continue";
	getchar();
	return 0;
}