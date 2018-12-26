# Adam Smith
# Projecteuler.net problem #3

# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

factors = []
primeFactors = []
aa = 6008514751430
a = 13195
isPrime = True


def findFactors(a):
    for x in range(1, a):
        if a % x == 0:
            factors.append(x)


def checkPrime(n):
    for j in range(2, n):
        if n % j == 0:
            isPrime = False
            break


def findPrimes(factors):
    for i in range(1, len(factors)):
        checkPrime(factors[i])
        if isPrime:
            primeFactors.append(factors[i])


findFactors(a)
findPrimes(factors)

for k in range(0, len(primeFactors)):
    print(primeFactors[k])

