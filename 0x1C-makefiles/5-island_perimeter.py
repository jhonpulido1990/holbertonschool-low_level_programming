#!/usr/bin/python3
"""
5-perimeter
"""


def island_perimeter(grid):
    """ Perimeter """
    perime = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            derecha = j + 1
            izquierda = j - 1
            arriba = i - 1
            abajo = i + 1
            if grid[i][j] == 1:
                if izquierda > -1:
                    if grid[i][izquierda] == 0:
                        perime += 1
                else:
                    perime += 1
                if derecha < len(grid[i]):
                    if grid[i][derecha] == 0:
                        perime += 1
                else:
                    perime += 1
                if arriba > -1:
                    if grid[arriba][j] == 0:
                        perime += 1
                else:
                    perime += 1
                if abajo < len(grid):
                    if grid[abajo][j] == 0:
                        perime += 1
                else:
                    perime += 1
    if perime == -4:
        return 0
    else:
        return perime
