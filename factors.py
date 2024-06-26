#!/usr/bin/python3
import sys

with open(sys.argv[1], "r") as f:
	for num in f.readlines():
		num = int(num)
		if num % 2 == 0:
			print("{}={}*{}".format(num, num // 2, 2))
			continue

		for i in range(3, num // 2 + 1, 2):
			if (num % i == 0):
				print("{}={}*{}".format(num, num // i, i))
				break
