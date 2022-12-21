/*
** EPITECH PROJECT, 2022
** math
** File description:
** arcsin.c
*/
#include "my_math.h"

float arcsin(float x)
{
    float r = -arccos(x) + pi / 2;
    return r;
}