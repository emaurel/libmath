/*
** EPITECH PROJECT, 2022
** math
** File description:
** sign.c
*/

#include "my_math.h"

int sign(float x)
{
    if (x != 0)
        return x / absol(x);
    return 1;
}
