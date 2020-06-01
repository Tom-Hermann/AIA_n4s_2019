/*
** EPITECH PROJECT, 2020
** my atof
** File description:
** convert a str to float nbr
*/

float my_atof(char *str)
{
    int i = 0;
    int div = 0;
    float nbr = 0;
    int is_neg = (str[i] == '-')? ++i: i;

    for (; str[i] != 0 && str[i] >= '0' && str[i] <= '9'; i++)
        nbr = nbr * 10 + str[i] - 48;
    if (str[i] == '.') {
        i++;
        for (; str[i] != 0; i++) {
            nbr = nbr * 10 + str[i] - 48;
            div++;
        }
    }
    for (; div > 0; div--)
        nbr /= 10;
    return ((is_neg == 1)? -nbr: nbr);
}