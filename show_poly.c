/*
** EPITECH PROJECT, 2022
** math
** File description:
** show_poly.c
*/

#include "my_math.h"

void show_poly(polynomial *poly)
{
    for (int i = 0; i < poly->degree + 1; i++) {
        if (poly->coefs[i] != 0) {
            if (i == poly->degree - 1)
                printf("%.1fx + ", poly->coefs[i]);
            else if (i == poly->degree)
                printf("%.1f\n", poly->coefs[i]);
            else
            printf("%.1fx^%i + ", poly->coefs[i], poly->degree - i);
        }
    }
}
