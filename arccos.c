/*
** EPITECH PROJECT, 2022
** B-MAT-100-MPL-1-1-101pong-edgar.maurel
** File description:
** arccos.c
*/
#include "my_math.h"

float arccos(float x)
{
    float r = pi / 2;
    if (is_eq(x, 1.))
        return 0.;
    if (is_eq(x, -1.))
        return pi;
    for (int i = 0; i <= 20; i++)
        r -= factorial(2 * i) * power(x, 2 * i + 1) /
        (power(2, 2 * i) * power(factorial(i), 2) * (2 * i + 1));
    return r;
}
