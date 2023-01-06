/*
** EPITECH PROJECT, 2022
** math
** File description:
** max.c
*/

#include "my_math.h"

float max(float a, float b)
{
    float res = a < b ? b : a;
    return res;
}
