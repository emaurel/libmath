/*
** EPITECH PROJECT, 2022
** math
** File description:
** find_root_newton.c
*/

#include "my_math.h"


float find_root_newton(polynomial *poly, float start_value, float precision)
{
    float res = start_value;
    float eval = eval_polynomial(poly, res);
    polynomial *derive = derive_polynomial(poly);
    float eval_derive = eval_polynomial(derive, res);
    while (eval < -precision || eval > precision) {
        res = res - eval / eval_derive;
        eval = eval_polynomial(poly, res);
        eval_derive = eval_polynomial(derive, res);
    }
    return res;
}
