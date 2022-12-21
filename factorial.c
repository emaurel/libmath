/*
** EPITECH PROJECT, 2022
** B-MAT-100-MPL-1-1-101pong-edgar.maurel
** File description:
** factorial.c
*/

float factorial(float x)
{
    if (x == 0)
        return 1;
    if (x < 0)
        return 0;
    unsigned long long int r = 1;
    for (int i = 0; i < x; i++) {
        r *= x - i;
    }
    return r;
}
