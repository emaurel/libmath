/*
** EPITECH PROJECT, 2022
** B-MAT-100-MPL-1-1-101pong-edgar.maurel
** File description:
** sqrt.c
*/
#include "my_math.h"

int my_compute_square_root(int nb)
{
    int c = 0;
    int odd = 1;

    while (nb != 0) {
        if (nb < 0)
            return 0;
        nb -= odd;
        odd += 2;
        c++;
    }
    return c;
}

float root(float x)
{
    float res = 0;
    float sqrt = x / 2;

    while (res != sqrt) {
        res = sqrt;
        sqrt = (x / res + res) / 2;
    }
    return sqrt;
}
