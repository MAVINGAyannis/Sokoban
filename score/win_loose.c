/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** win_loose.c
*/
#include "../game/my_sokoban.h"

int winner(char **map, int sizemap, char **map2)
{
    int x = 0;
    int y = 0;

    while (y != sizemap) {
        if (map2[y][x] == 'O' && map[y][x] != 'X')
            return (0);
        if (map[y][x] == '\n') {
            x = 0;
            y++;
        }
        x++;
    }
    clear();
    endwin();
    exit(0);
}
