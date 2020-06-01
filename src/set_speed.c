/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** set_speed
*/

#include "nfs.h"

int set_speed(char **response)
{
    float front_dist = my_atof(response[19]);
    float speed = 0.1;

    for (; front_dist >= 0 && speed < 1; speed += 0.1, front_dist -= 200);
    return (CAR_FORWARD(speed));
}