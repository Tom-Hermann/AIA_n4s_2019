/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** is_number
*/

int is_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (0);
    return (1);
}