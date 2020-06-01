/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** ai
*/

#include <unistd.h>
#include "nfs.h"

int is_ko(char *response)
{
    int i = 0;

    for (; response[i] != ':' && response[i] != '\0'; i++);
    if (response[i] == '\0')
        return (0);
    i++;
    if (response[i] == 'K' && response[i + 1] == 'O')
        return (1);
    return (0);
}

int is_finished(char *response)
{
    int i = my_strlen(response);
    char *additionnal_info = NULL;

    if (is_ko(response) == 1)
        return (2);
    for (; response[i] != ':'; i--);
    i--;
    for (; response[i] != ':'; i--);
    i++;
    additionnal_info = malloc(sizeof(char) * (my_strlen(response) - i));
    for (int y = 0; response[i] != ':'; i++, y++) {
        additionnal_info[y] = response[i];
        additionnal_info[y + 1] = '\0';
    }
    if (my_strcmp(additionnal_info, "Track Cleared")) {
        free(additionnal_info);
        CAR_FORWARD(0);
        return (1);
    }
    free(additionnal_info);
    return (0);
}

int	exec_cmd(char *cmd)
{
    char *response = NULL;

    my_putstr(cmd);
    response = read_intput();
    if (response == NULL) {
        free(response);
        return (1);
    }
    return (is_finished(response));
}

int exec_cmd_int(char *cmd, float value)
{
    char *response = NULL;

    my_put_str_nbr(cmd, value);
    response = read_intput();
    if (response == NULL) {
        free(response);
        return (1);
    }
    return (is_finished(response));
}

void ai(void)
{
    char *response = NULL;

    CAR_FORWARD(1);
    WHEELS_DIR(0);
    while (1) {
        usleep(2000);
        my_putstr("get_info_lidar\n");
        if ((response = read_intput()) == NULL)
            break;
        if (is_finished(response) == 1)
            break;
        if (set_speed(my_str_to_word_array(response, ':')) == 1)
            break;
        if (set_dir(my_str_to_word_array(response, ':')) == 1)
            break;
    }
    free(response);
}