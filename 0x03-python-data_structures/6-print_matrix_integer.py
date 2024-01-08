#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print()
    else:
        for row_num in range(len(matrix)):
            for item_num in range(len(matrix[row_num])):
                if item_num != len(matrix[row_num]) - 1:
                    endspace = ' '
                else:
                    endspace = ''
                print("{:d}".format(matrix[row_num][item_num]), end=endspace)
            print()
