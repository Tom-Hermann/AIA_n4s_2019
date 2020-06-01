/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** USEFULL
*/

#ifndef USEFULL_H_
#define USEFULL_H_

void my_putchar(char c);
void my_putstr(char *str);
int my_getnbr(char const *str);
void my_put_nbr(int nb);
char **my_str_to_word_array(char *str, char c);
char *my_strcat(char *str1, char *str2);
int my_strlen(char *str);
char *read_intput(void);
int my_strcmp(char *str1, char *str2);
int is_number(char *str);
void free_array(char **array);
int my_arraylen(char **array);
void display_array(char **array);
void pop_array(char **array, int i);
float my_atof(char *str);
char **add_array(char **array, char *str, int i_add);
void my_put_str_nbr(char *str, float dir);
char *int_to_str(int nb);


#endif /* !USEFULL_H_ */
