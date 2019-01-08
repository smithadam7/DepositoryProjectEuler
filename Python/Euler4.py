# Adam Smith
# Projecteuler.net problem #4

# A palindromic number reads the same both ways.
# The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from the product of two 3 - digit numbers.

def checkPal(pal):
	reverse = 0
	original = pal

	while pal != 0:
		digit = pal % 10
		reverse = (reverse * 10) + digit
		pal = pal // 10
	
	if (original == reverse):
		return True
	else:
		return False


num1 = 1000
num2 = 1000

palindromes = []

for j in range(0, 1000):
	for i in range (0, 1000):
		product = (num1 * num2)
		num1-=1
		if (checkPal(product)):
			palindromes.append(product)
			break
	num1 = 1000
	num2-=1

print(sorted(palindromes, reverse=True))
