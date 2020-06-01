/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** my_strlen
*/

#include "include.h"

int my_strlen(char *str)
{
    int i = 0;

    for (;str[i] != 0; i++);
    return (i);
}

int my_arraylen(char **array)
{
    int i = 0;

    for (;array[i] != NULL; i++);
    return (i);
}