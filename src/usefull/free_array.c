/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** free_array
*/

#include "include.h"

void free_array(char **array)
{
    int i = 0;

    for (; array[i] != NULL; i++)
        free(array[i]);
    free(array[i]);
    free(array);
}