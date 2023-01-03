/*
** EPITECH PROJECT, 2022
** math
** File description:
** eval_polynomial.c
*/

#include "my_math.h"

float eval_polynomial(polynomial *poly, float val)
{
    float res = 0;
    for (int i = 0; i < poly->degree + 1; i++) {
        res += poly->coefs[i] * power(val, poly->degree - i);
    }
    return res;
}
