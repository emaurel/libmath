/*
** EPITECH PROJECT, 2022
** math
** File description:
** integrate_polynomial.c
*/

#include "my_math.h"

polynomial *integrate_polynomial(polynomial *poly, float C)
{
    polynomial *res = malloc(sizeof(polynomial));
    res->degree = poly->degree + 1;
    res->coefs = malloc(sizeof(float) * res->degree + 1);
    for (int i = 0; i < res->degree; i++) {
        res->coefs[i] = poly->coefs[i] / (float)(res->degree - i);
    }
    res->coefs[res->degree] = C;
    return res;
}
