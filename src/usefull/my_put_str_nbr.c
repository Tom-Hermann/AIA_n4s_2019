/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** my_put_str_nbr
*/

#include "include.h"

void after_dot(int after_dot_nbr)
{
    if (after_dot_nbr < 10) {
        my_putstr("00");
        my_put_nbr(after_dot_nbr);
    }
    else if (after_dot_nbr < 100) {
        my_putstr("0");
        my_put_nbr(after_dot_nbr);
    }
    else
        my_put_nbr(after_dot_nbr);
}

void my_put_str_nbr(char *str, float dir)
{
    my_putstr(str);
    if (dir >= 1)
        my_put_nbr(1);
    else if (dir <= -1)
        my_put_nbr(-1);
    else {
        if (dir < 0)
            my_putchar('-');
        my_put_nbr(0);
        my_putchar('.');
        after_dot(abs((int)(dir * 1000)));
    }
    my_putchar('\n');
}