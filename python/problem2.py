# Project Euler
# Problem 2

sum = 0
term = 1
next = 1
while next <= 4000000:
	tmp = next
	next = term + next
	term = tmp

	if (term % 2) == 0:
		sum += term

print sum

