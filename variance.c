/*
** EPITECH PROJECT, 2022
** math
** File description:
** variance.c
*/

#include "my_math.h"

float variance(float *lst, int len)
{
    float res = 0;
    for (int i = 0; i < len; i++) {
        res += power(lst[i], 2);
    }
    res /= (float)len;
    res -= power(mean(lst, len), 2);
    return res;
}
