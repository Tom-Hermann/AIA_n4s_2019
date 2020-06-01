/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** int_to_char
*/

#include <stdlib.h>

int my_intlen(int nb)
{
    int i = 0;
    int nbr = nb;

    while (nbr != 0) {
        nbr = nbr / 10;
        i = i + 1;
    }
    return (i);
}

int my_pow(int nb, int p)
{
    int i = 1;
    int save = nb;

    if (p == 0)
        return (1);
    else if (p < 0)
        return (0);
    for (; i != p; i++, nb *= save);
    return (nb);
}

char *int_to_str(int nb)
{
    char *str = malloc(sizeof(char) * (my_intlen(nb) + 2));
    int i = 0;
    int div = (int)my_pow(10, my_intlen(nb)) / 10;

    if (nb == 0)
        return ("0\0");
    if (nb < 0) {
        str[i] = '-';
        nb = nb * (-1);
        i = i + 1;
    }
    while (div > 0) {
        str[i] = nb / div + 48;
        nb = nb % div;
        i = i + 1;
        div = div / 10;
    }
    str[i] = 0;
    return (str);
}
