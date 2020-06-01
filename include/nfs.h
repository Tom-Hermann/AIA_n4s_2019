/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** nfs
*/

#ifndef NFS_H_
#define NFS_H_
#include "include.h"

#define START_SIMULATION    exec_cmd("start_simulation\n")
#define STOP_SIMULATION     exec_cmd("stop_simulation\n")
#define CAR_FORWARD(i)      exec_cmd_int("car_forward:", i)
#define CAR_BACKWARDS(i)    exec_cmd_int("car_backwards:", i)
#define WHEELS_DIR(i)       exec_cmd_int("wheels_dir:", i)
#define GET_INFO_LIDAR      exec_cmd("get_info_lidar\n")
#define GET_CURRENT_WHEELS  exec_cmd("get_current_wheels\n")
#define GET_CURRENT_SPEED  exec_cmd("get_current_speed\n")

#endif /* !NFS_H_ */
