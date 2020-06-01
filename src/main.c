/*
** EPITECH PROJECT, 2019
** Dossier modèle
** File description:
** main
*/

#include "nfs.h"

int main(void)
{
    char **response = NULL;

    if (START_SIMULATION == 2) {
        return (84);
    }
    ai();
    STOP_SIMULATION;
    if (response != NULL)
        free_array(response);
    return (0);
}