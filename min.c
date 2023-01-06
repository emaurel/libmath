/*
** EPITECH PROJECT, 2022
** math
** File description:
** min.c
*/

#include "my_math.h"

float min(float a, float b)
{
    float res = a < b ? a : b;
    return res;
}
