#!/usr/bin/python3
import sys
from threading import Thread

def factorize1(num_list):
	""" Generate 2 factors for a given number"""
	for num in num_list:
		factor1 = 2
		if num % 2 == 0:
			print(f"{num}={num//factor1}*{factor1}")
			continue
		for i in range(3, num//2 + 1, 2):
			if (num % i == 0):
				factor2 = num // i
				print(f"{num} = {factor2} * {i}")
				break

if len(sys.argv) != 2:
	sys.exit(f"Wrong usage: {sys.argv[0]} <file_path>")

filename = sys.argv[1]

file = open(filename, 'r')
lines = file.readlines()
num_list = []
for line in lines:
	num = int(line.rstrip())
	num_list.append(num)

t1 = Thread(target=factorize1, args=(num_list[:len(num_list)//2],))
t2 = Thread(target=factorize1, args=(num_list[len(num_list)//2:],))
t1.start()
t2.start()
