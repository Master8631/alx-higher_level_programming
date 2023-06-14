#!/usr/bin/python3
import sys

if _name_ == "_main_":
    result = 0
    args = sys.argv
    argc = len(args)

    for i in range(1, argc):
        result += int(args[i])

        print(result)
