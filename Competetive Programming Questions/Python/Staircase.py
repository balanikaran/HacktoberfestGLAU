#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the staircase function below.
def staircase(n):
    for i in range(1,n+1):
        print(('#'*i).rjust(n,' '))
    # for i in range(0, n+1):
    #     for j in range(0, n+1):
    #         if (i + j) >= n:
    #             print("#")
    #         else:
    #             print(" ")

if __name__ == '__main__':
    n = int(input())

    staircase(n)