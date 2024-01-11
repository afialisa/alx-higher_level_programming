#!/usr/bin/python3
def roman_to_int(roman_string: str):
    if roman_string is None or type(roman_string) != str:
        return 0
    data = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    numerals = [data[x] for x in roman_string] + [0]
    rom = 0

    for i in range(len(numerals) - 1):
        if numerals[i] >= numerals[i+1]:
            rom += numerals[i]
        else:
            rom -= numerals[i]

    return rep
