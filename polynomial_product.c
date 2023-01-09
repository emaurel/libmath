/*
** EPITECH PROJECT, 2022
** math
** File description:
** polynomial_product.c
*/

#include "my_math.h"

float get_val(polynomial *poly, int ind)
{
    if (ind > poly->degree)
        return 0;
    return poly->coefs[ind];
}

polynomial *polynomial_product(polynomial *poly1, polynomial *poly2)
{
    polynomial *res = malloc(sizeof(polynomial));
    res->degree = poly1->degree + poly2->degree;
    res->coefs = malloc(sizeof(float) * (res->degree + 1));
    for (int k = 0; k < res->degree + 1; k++) {
        res->coefs[k] = 0;
        for (int r = 0; r <= k; r++) {
            res->coefs[k] += get_val(poly1, r) * get_val(poly2, k - r);
        }
    }
    return res;
}
