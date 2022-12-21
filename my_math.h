/*
** EPITECH PROJECT, 2022
** B-MAT-100-MPL-1-1-101pong-edgar.maurel
** File description:
** my_math.h
*/
#include <stdio.h>
#pragma once

#define pi 3.1415926535
#define e 2.7182818284


typedef struct {
    float start;
    float end;
} range;

float factorial(float x);
float power(float n, int p);
float arccos(float x);
float root(float x);
float cosinus(float x);
float sinus(float x);
float arcsin(float x);
int is_eq(float a, float b);
float arctan(float x);
float tangente(float x);
float expo(float x);