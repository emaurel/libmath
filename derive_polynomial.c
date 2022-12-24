/*
** EPITECH PROJECT, 2022
** math
** File description:
** derive_polynomial.c
*/

#include "my_math.h"

polynomial *derive_polynomial(polynomial *poly)
{
    polynomial *res = malloc(sizeof(polynomial));
    if (poly->degree == 0) {
        res->degree = 0;
        res->coefs = malloc(sizeof(float));
        res->coefs[0] = 0;
        return res;
    }
    res->degree = poly->degree - 1;
    res->coefs = malloc(sizeof(float) * res->degree);
    for (int i = 0; i < res->degree + 1; i++) {
        res->coefs[i] = poly->coefs[i] * (res->degree - i + 1);
    }
    return res;
}
