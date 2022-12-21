/*
** EPITECH PROJECT, 2022
** math
** File description:
** tan.c
*/

#include "my_math.h"

float tangente(float x)
{
    if (x <= 1)
        return sinus(x) / cosinus(x);
    else 
     return 2 * tangente(x / 2) / (1 - power(tangente(x / 2), 2));
}
