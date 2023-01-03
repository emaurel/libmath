/*
** EPITECH PROJECT, 2022
** math
** File description:
** exponential.c
*/

#include "my_math.h"

float exponential(float x)
{
    float res = 0;
    if (x <= 2 && -2 <= x) {
        for (int i = 0; i <= 20; i++) {
            res += power(x, i) / factorial(i);
        }
    } else {
        return e * exponential(x - 1);
    }
    return res;
}