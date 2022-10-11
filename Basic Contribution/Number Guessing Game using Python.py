import random
import math
# Taking Inputs
l = int(input("Enter Value 1: "))


u = int(input("Enter Value 2: "))

z = random.randint(l, u)
print("\n\tYou've only ",round(math.log(u - l + 1, 2))," chances to guess the integer!\n")

count = 0

while count < math.log(u - l + 1, 2):
	count += 1

	guess = int(input("Guess a number:- "))

	
	if z == guess:
		print("Congratulations you did it in ",count, " try")
		
		break
	elif z > guess:
		print("You guessed too small!")
	elif z < guess:
		print("You Guessed too high!")


if count >= math.log(u - l + 1, 2):
	print("\nThe number is %d" % z)
	print("\tBetter Luck Next time!")


