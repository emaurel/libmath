/*
** EPITECH PROJECT, 2022
** math
** File description:
** find_root_secant.c
*/

#include "my_math.h"

float find_root_secant(polynomial *poly, float start_value, float end_value, float precision)
{
    float eval_start = eval_polynomial(poly, start_value);
    float eval_end = eval_polynomial(poly, end_value);
    float res = (start_value * eval_end - end_value * eval_start) / (eval_end - eval_start);
    float eval_res = eval_polynomial(poly, res);
    while (eval_res < -precision || eval_res > precision) {
        start_value = end_value;
        end_value = res;
        eval_start = eval_polynomial(poly, start_value);
        eval_end = eval_polynomial(poly, end_value);
        res = (start_value * eval_end - end_value * eval_start) / (eval_end - eval_start);
        eval_res = eval_polynomial(poly, res);
    }
    return res;
}
