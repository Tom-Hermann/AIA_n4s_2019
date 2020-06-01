/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** pop_array
*/

#include "include.h"

void pop_array(char **array, int i)
{
    for (; array[i] != NULL; i++)
        array[i] = array[i + 1];
    free(array[i]);
}

char **add_array(char **array, char *str, int i_add)
{
    int size = my_arraylen(array) + 1;
    char **res = malloc(sizeof(char *) * (size + 1));
    int y = 0;

    if (size < i_add)
        return (array);
    for (int i = 0; array[y] != NULL; i++) {
        if (i == i_add)
            res[i] = str;
        else {
            res[i] = array[y];
            y++;
        }
    }
    res[size] = NULL;
    return (res);
}