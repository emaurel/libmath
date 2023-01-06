/*
** EPITECH PROJECT, 2022
** math
** File description:
** min.c
*/

#include "my_math.h"

float min_lst(float *lst, int len)
{
    float min = lst[0];
    for (int i = 0; i < len; i++) {
        if (lst[i] < min)
            min = lst[i];
    }
    return min;
}
