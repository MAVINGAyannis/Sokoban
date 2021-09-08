/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** error_3.c
*/
#include "../game/my_sokoban.h"

void wrong_map_3(char *buffer, int v)
{
    if (buffer[v] != '\n' && buffer[v] != ' ') {
        my_printf("Invalid map.\n");
        exit(84);
    }
}

void wrong_map_2(char *buffer, int v)
{
    if (buffer[v] != 'X' && buffer[v] != 'O')
        wrong_map_3(buffer, v);
}

void wrong_map(char *buffer, int v)
{
    if (buffer[v] != 'P' && buffer[v] != '#')
        wrong_map_2(buffer, v);
}

void space_exit(int key)
{
    if (key == 32) {
        clear();
        endwin();
        exit(1);
    }
}