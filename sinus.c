/*
** EPITECH PROJECT, 2022
** math
** File description:
** sinus.c
*/
#include "my_math.h"

float sinus(float x)
{
    float r = 0;
    if (x <= 1) {
        for (int i = 0; i < 10; i++)
            r += (power(-1, i) * power(x, 2 * i + 1) / (factorial(2 * i + 1)));
        return r;
    }
    return 2 * sinus(x / 2) * cosinus(x / 2);
}