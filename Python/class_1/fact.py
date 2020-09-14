def fact(n = 3):
	a=1
	b=0
	while b<=n-1:
		b += 1
		a *= b
	return a

print("5! : ", fact(5))

a = fact(6)
b = fact(7)

print("6!  :",a)
print("7!  :",b)

print("no input:", fact())