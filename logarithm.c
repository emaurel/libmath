/*
** EPITECH PROJECT, 2022
** math
** File description:
** logarithm.c
*/

#include "my_math.h"

float logarithm(float x)
{
    float res = 0;
    if (x <= 2 && -2 <= x)
    for (int i = 0; i < x * 500; i++) {
        res += power(-1, i) * power(x - 1, i + 1) / (i + 1);
    } else {
        return logarithm(x / 2) + logarithm(2);
    }
    return res;
}
