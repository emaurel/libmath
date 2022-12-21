/*
** EPITECH PROJECT, 2022
** math
** File description:
** arctan.c
*/

#include "my_math.h"

float arctan(float x)
{
    float res = 0;
    for (int n = 0; n < 5; n++) {
        res += (power(x, 2 * n + 1) * power(-1, n)) / (2 * n + 1);
    }
    return res;
}