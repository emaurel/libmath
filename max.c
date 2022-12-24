/*
** EPITECH PROJECT, 2022
** math
** File description:
** max.c
*/

#include "my_math.h"

float max(float *lst, int len)
{
    float max = lst[0];
    for (int i = 0; i < len; i++) {
        if (lst[i] > max) {
            max = lst[i];
        }
    }
    return max;
}
