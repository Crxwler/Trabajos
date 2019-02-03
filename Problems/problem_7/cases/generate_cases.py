import random


def generate_knapsack(filename, max_g, max_n, max_p, max_c):
	text_file = open(filename, 'w')
	G = random.randint(1, max_g)
	G = 2609
	N = random.randint(1, max_n)
	N = 500
	text_file.write('%i %i\n' % (G, N))
	for i in range(N):
		P = random.randint(2, max_p)
		C = random.randint(2, max_c)
		text_file.write('%i %i\n' % (C, P))
	text_file.close()

#G = randint(1, 10000)
#N = randint(1, 500)
#P = randint(1, 100)
#C = randint(1, 100)

#for x in range(1,5):
#	generate_knapsack('caso'+str(x)+'.in', 1000, 100, 30, 30)

for x in range(5,11):
	generate_knapsack('caso'+str(x)+'.in', 10000, 500, 30, 30)