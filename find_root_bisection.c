/*
** EPITECH PROJECT, 2022
** math
** File description:
** find_root_bisection.c
*/

#include "my_math.h"

float find_root_bisection(polynomial *poly, float start_value, float end_value, float precision)
{
    float eval_start = eval_polynomial(poly, start_value);
    float eval_end = eval_polynomial(poly, end_value);
    int sens = eval_start <= eval_end;
    float mid_value = (end_value - start_value) / 2;;
    float eval_mid = eval_polynomial(poly, mid_value);
    if (sign(eval_start) == sign(eval_end) == sign(eval_mid))
        return 84;
    while ((eval_start < -precision || eval_start > precision) && (eval_end < -precision || eval_end > precision)) {
        mid_value = (end_value - start_value) / 2 + start_value;
        eval_mid = eval_polynomial(poly, mid_value);
        eval_start = eval_polynomial(poly, start_value);
        eval_end = eval_polynomial(poly, end_value);
        if (eval_mid == 0)
            return mid_value;
        if (sign(eval_start) == sign(eval_mid))
            start_value = mid_value;
        else
            end_value = mid_value;
    }
    if ((eval_start < -0.0001 || eval_start > 0.0001))
        return start_value;
    return end_value;
}
