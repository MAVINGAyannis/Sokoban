/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** map2.c
*/
#include "my_sokoban.h"

char **txt_to_map_2(char **map2, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        map2[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            map2[o][z] = '\n';
            o++;
            +v++;
            z = 0;
        }
    }
    return (map2);
}

char **the_malloc_2(char **map2, int sizemap, int col)
{
    map2 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        map2[i] = malloc(sizeof(char *) * col);
    return (map2);
}

char **block_reset(char **map2, int sizemap)
{
    int i = 0;
    int o = 0;

    while (i != sizemap) {
        if (map2[i][o] == 'X')
            map2[i][o] = ' ';
        o++;
        if (map2[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    return (map2);
}

char **player_reset(char **map2, int sizemap)
{
    int i = 0;
    int o = 0;

    while (map2[i][o] != 'P') {
        o++;
        if (map2[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    map2[i][o] = ' ';
    map2 = block_reset(map2, sizemap);
    return (map2);
}