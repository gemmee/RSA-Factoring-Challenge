#!/usr/bin/python3
import sys
from math import sqrt


with open(sys.argv[1], "r") as f:
	for num in f.readlines():
		num = int(num)
		factor1 = 2
		while factor1 < int(sqrt(num)) + 1:
			if (num % factor1 == 0):
				factor2 = num // factor1
				print("{:d}={:d}*{:d}".format(num, factor2, factor1))
				break
			factor1 += 1
