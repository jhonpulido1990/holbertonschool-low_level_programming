#!/usr/bin/python3
"""
5-perimeter
"""


def island_perimeter(grid):
    h = 0
    v = 0
    perime = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            derecha = h + 1
            izquierda = h - 1
            arriba = v - 1
            abajo = v + 1
            if grid[i][j] == 1:
                if izquierda > -1:
                    if grid[i][izquierda] == 0:
                        perime += 1
                else:
                    perime += 1
                if derecha < j:
                    if grid[i][derecha] == 0:
                        perime += 1
                if arriba > -1:
                    if grid[arriba][j] == 0:
                        perime += 1
                else:
                    perime += 1
                if abajo < i:
                    if grid[abajo][j] == 0:
                        perime += 1
    return perime
