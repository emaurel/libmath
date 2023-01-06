/*
** EPITECH PROJECT, 2022
** B-MAT-100-MPL-1-1-101pong-edgar.maurel
** File description:
** my_math.h
*/
#include <stdio.h>
#include <stdlib.h>
#pragma once


#define pi 3.1415926535
#define e 2.7182818284

typedef struct {
    int degree;
    float *coefs;
} polynomial;



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
float exponential(float x);
float get_delta(float a, float b, float c);
float logarithm(float x);
float log_base(float x, float base);


polynomial *derive_polynomial(polynomial *poly);
polynomial *integrate_polynomial(polynomial *poly, float C);
void show_poly(polynomial *poly);
float eval_polynomial(polynomial *poly, float val);
polynomial *polynomial_sum(polynomial *poly1, polynomial *poly2);

float mean(float *lst, int len);
float variance(float *lst, int len);
float min_lst(float *lst, int len);
float max_lst(float *lst, int len);
float std_variation(float *lst, int len);

float max(float a, float b);
float min(float a, float b);