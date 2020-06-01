/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** display_array
*/

#include "include.h"

void display_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}