/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** my_strcat
*/

#include "include.h"

char *my_strcat(char *str1, char *str2)
{
    char *res = malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 1));
    int i = 0;

    for (; str1[i] != '\0'; i++)
        res[i] = str1[i];
    for (int i_str = 0; str2[i_str] != '\0';i++, i_str++)
        res[i] = str2[i_str];
    res[i] = '\0';
    return  (res);
}