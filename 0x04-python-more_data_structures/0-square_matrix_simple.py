#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    """Returns a matrix consisting of the square of all integers of a matrix"""
    new_matrix = matrix.copy()

    for i in range(len(matrix)):
        new_matrix[i] = list(map(lambda x: x**2, matrix[i]))

    return (new_matrix)
