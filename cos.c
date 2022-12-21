/*
** EPITECH PROJECT, 2022
** math
** File description:
** cos.c
*/
#include "my_math.h"

float cosinus(float x)
{
    float r = 0;
    float res = 0;
    if (x <= 1) {
        for (int i = 0; i < 11; i++) {
            r += (power(-1, i) * power(x, 2 * i) / (factorial(2 * i)));
        }
        return r;
    }
    res = power(cosinus(x / 2), 2) - power(sinus(x / 2), 2);
    return res;
}