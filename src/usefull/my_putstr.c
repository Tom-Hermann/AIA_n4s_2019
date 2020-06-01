/*
** EPITECH PROJECT, 2020
** src
** File description:
** my_putstr
*/

#include "unistd.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}