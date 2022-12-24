/*
** EPITECH PROJECT, 2022
** math
** File description:
** mean.c
*/

#include "my_math.h"

float mean(float *lst, int len)
{
    float sum = 0;
    for (int i = 0; i < len; i++) {
        sum += lst[i];
    }
    return sum / (float)len;
}
