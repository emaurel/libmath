/*
** EPITECH PROJECT, 2022
** math
** File description:
** is_inf.c
*/

int is_eq(float a, float b)
{
    return a > b - 0.000001 || a < b + 0.000001;
}