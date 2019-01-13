# Adam Smith
# Projecteuler.net problem #7

# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
# What is the 10 001st prime number ?

primes = []
primes.append(2)
for x in range(1,500000):
	for y in range(2, x):
		if x % y == 0:
			break
		if (y == (x - 1)):
			primes.append(x)
		

# print(primes[10000])
print(primes)
