/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** function
*/

#ifndef FUNCTION_H_
#define FUNCTION_H_

void ai(void);
int is_finished(char *response);
int	exec_cmd(char *str);
float **init_dir(void);
int set_dir(char **response);
int set_speed(char **response);
int exec_cmd_int(char *cmd, float value);

#endif /* !FUNCTION_H_ */
