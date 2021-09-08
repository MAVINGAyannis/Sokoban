/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_sokoban.c
*/
#include "my_sokoban.h"

void printmap(char **map, int sizemap)
{
    clear();
    for (int h = 0; h != sizemap; h++) {
        printw(map[h]);
    }
}

char **txt_to_map(char **map, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        wrong_map(buffer, v);
        map[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            map[o][z] = '\n';
            o++;
            v++;
            z = 0;
        }
    }
    return (map);
}

char **mover(char **map, int key, char **map2)
{
    high(map, key, map2);
    low(map, key, map2);
    left(map, key, map2);
    right(map, key, map2);
    return (map);
}

int main(int argc, char **argv, char **map)
{
    char *filepath = argv[1];
    int i = 0;
    int sizemap = 0;
    int col = 0;
    int fd;
    char *buffer = buff(filepath);
    char **map2;

    sizemap = how_size(buffer, sizemap);
    col = how_col(buffer, col);
    map = the_malloc(map, sizemap, col);
    map = txt_to_map(map, buffer);
    invalid_map(map, sizemap);
    map2 = the_malloc_2(map2, sizemap, col);
    map2 = txt_to_map_2(map2, buffer);
    map2 = player_reset(map2, sizemap);
    game(map, sizemap, map2);
    return (1);
}