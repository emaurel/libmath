/*
** EPITECH PROJECT, 2022
** math
** File description:
** polynomial_min_degree.c
*/

#include "my_math.h"

int polynomial_min_degree(polynomial *poly)
{
    int i = poly->degree;
    while(i >= 0) {
        if (poly->coefs[i])
            return i + 1;
        i--;
    }
    return 0;
}
