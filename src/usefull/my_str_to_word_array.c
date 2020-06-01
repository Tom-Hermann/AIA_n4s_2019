/*
** EPITECH PROJECT, 2019
** str to array
** File description:
** str to array
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **put_str_in_array(char **str_array, char *str, char c, int nb_word)
{
    int current_word = 0;
    int i = 0;
    int j = 0;

    for (; current_word != nb_word; current_word++, i++) {
        for (j = 0; str[i] != c && str[i] != '\0'; i++, j++)
            str_array[current_word][j] = str[i];
        str_array[current_word][j] = '\0';
    }
    str_array[current_word] = NULL;
    return (str_array);
}

char **malloc_word(char **str_array, char *str, char c, int nb_word)
{
    int i = 0;
    int len_word = 1;

    for (int current_word = 0; current_word != nb_word; current_word++) {
        for (; str[i] != c && str[i] != '\0'; len_word++, i++);
        str_array[current_word] = malloc(sizeof(char) * (len_word + 1));
        i = i + 1;
        len_word = 1;
    }
    return (put_str_in_array(str_array, str, c, nb_word));
}

char **my_str_to_word_array(char *str, char c)
{
    int nb_word = 1;
    char **word_array = NULL;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            nb_word = nb_word + 1;
    word_array = malloc(sizeof(char *) * (nb_word + 1));
    return (malloc_word(word_array, str, c, nb_word));
}