/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** str_is_equal
*/

#include "include.h"

int my_strcmp(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2))
        return (0);
    for (int i = 0; str1[i] != 0; i++)
        if (str1[i] != str2[i])
            return (0);
    return (1);
}
