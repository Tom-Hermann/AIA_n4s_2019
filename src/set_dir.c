/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** set_dir
*/

#include <math.h>
#include "nfs.h"

int choose_dir(float dir, float front_dist, float env_car)
{
    float dir_ref = 0;
    float wheel_limit = 0.5;

    for (; env_car > 0 && wheel_limit > 0.2; env_car -= 8000,
        wheel_limit -= 0.1);
    if (front_dist >= 1200)
        return (WHEELS_DIR(0));
    else if (dir > 0) {
        for (; dir_ref > -wheel_limit && dir > 0;
            dir_ref -= 14 * 1 / front_dist, dir -= front_dist);
        return (WHEELS_DIR(dir_ref));
    }
    else {
        for (; dir_ref < wheel_limit && dir < 0;
            dir_ref += 14 * 1 / front_dist, dir += front_dist);
        return (WHEELS_DIR(dir_ref));
    }
}

int back_ward(void)
{
    float current_wheels = 0;
    char *response = NULL;

    my_putstr("get_current_wheels\n");
    if ((response = read_intput()) == NULL)
        return (1);
    if (is_finished(response) != 0)
        return (1);
    current_wheels = atof(my_str_to_word_array(response, ':')[3]);
    if (CAR_BACKWARDS(0.5) != 0)
        return (1);
    if (WHEELS_DIR(-current_wheels) != 0)
        return (1);
    sleep(2);
    free(response);
    return (0);
}

int set_dir(char **response)
{
    float sum_l = 0;
    float sum_r = 0;


    for (int i = 3; i < 19; i++)
        sum_l += atof(response[i]);
    for (int i = 19; i < 35; i++)
        sum_r += atof(response[i]);
    if (atof(response[19]) <= 50.0)
        if (back_ward() == 1)
            return (1);
    return (choose_dir(sum_r - sum_l, atof(response[19]), sum_r + sum_l));
}