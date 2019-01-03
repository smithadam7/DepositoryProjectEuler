# Adam Smith
# Projecteuler.net problem #5

# 2520 is the smallest number that can be divided by
# each of the numbers from 1 to 10 without any remainder.
# What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

multipleCount = 0
# for k in range(1000000000, 100000000, -1):

for k in range(1000000000, 300, -1):
	multipleCount = 0
	for x in range(1, 21):
		if k % 20 != 0:
			break
		if k % x == 0:
			multipleCount = multipleCount + 1
		if multipleCount == 20:
			print(k)
