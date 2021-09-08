/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** move.c
*/
#include "my_sokoban.h"

int high(char **map, int key, char **map2)
{
    int i = 0;
    int o = 0;

    for (o = 0; map[i][o] != 'P'; o++) {
        if (map[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    if (key == 65) {
        if (map[i - 1][o] == 'X') {
            if (map[i - 2][o] == '#' || map[i - 2][o] == 'X')
                return (0);
            map[i - 2][o] = 'X';
        }
        if (map[i - 1][o] == '#')
            return (0);
        map[i][o] = map2[i][o];
        map[i - 1][o] = 'P';
    }
}

int low(char **map, int key, char **map2)
{
    int i = 0;
    int o = 0;

    for (o = 0; map[i][o] != 'P'; o++) {
        if (map[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    if (key == 66) {
        if (map[i + 1][o] == 'X') {
            if (map[i + 2][o] == '#' || map[i + 2][o] == 'X')
                return (0);
            map[i + 2][o] = 'X';
        }
        if (map[i + 1][o] == '#')
            return (0);
        map[i][o] = map2[i][o];
        map[i + 1][o] = 'P';
    }
}

int left(char **map, int key, char **map2)
{
    int i = 0;
    int o = 0;

    for (o = 0; map[i][o] != 'P'; o++) {
        if (map[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    if (key == 68) {
        if (map[i][o - 1] == 'X') {
            if (map[i][o - 2] == '#' || map[i][o - 2] == 'X')
                return (0);
            map[i][o - 2] = 'X';
        }
        if (map[i][o - 1] == '#')
            return (0);
        map[i][o] = map2[i][o];
        map[i][o - 1] = 'P';
    }
}

int right(char **map, int key, char **map2)
{
    int i = 0;
    int o = 0;

    for (o = 0; map[i][o] != 'P'; o++) {
        if (map[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    if (key == 67) {
        if (map[i][o + 1] == 'X') {
            if (map[i][o + 2] == '#' || map[i][o + 2] == 'X')
                return (0);
            map[i][o + 2] = 'X';
        }
        if (map[i][o + 1] == '#')
            return (0);
        map[i][o] = map2[i][o];
        map[i][o + 1] = 'P';
    }
}

void game(char **map, int sizemap, char **map2)
{
    WINDOW *boite;
    int key = 0;

    initscr();
    curs_set(0);
    while (1) {
        printmap(map, sizemap);
        key = getch();
        space_exit(key);
        map = mover(map, key, map2);
        winner(map, sizemap, map2);
    }
    endwin();
}