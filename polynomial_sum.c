/*
** EPITECH PROJECT, 2022
** math
** File description:
** polynomial_sum.c
*/

#include "my_math.h"

polynomial *polynomial_sum(polynomial *poly1, polynomial *poly2)
{
    polynomial *res = malloc(sizeof(polynomial));
    res->degree = max(poly1->degree, poly2->degree);
    res->coefs = malloc(sizeof(float) * res->degree + 1);
    int j = 0;
    int k = 0;
    int l = 0;
    for (int i = 0; i < res->degree + 1; i++) {
        j = res->degree - i;
        if (j > poly1->degree)
            res->coefs[i] = poly2->coefs[k++];
        if (j > poly2->degree)
            res->coefs[i] = poly1->coefs[l++];
        if (!(j > poly1->degree || j > poly2->degree))
            res->coefs[i] = poly1->coefs[l++] + poly2->coefs[k++];
    }
    return res;
}
