/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** CPE
*/
#include "my_sokoban.h"

int how_size(char *buffer, int sizemap)
{
    int a = 0;

    while (buffer[a] != '\0') {
        if (buffer[a] == '\n') {
            sizemap++;
        }
        a++;
    }
    return (sizemap);
}

int how_col(char *buffer, int col)
{
    for (int a = 3; buffer[a] != '\n'; a++)
        col++;
    col++;
    return (col);
}

char **the_malloc(char **map, int sizemap, int col)
{
    map = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        map[i] = malloc(sizeof(char *) * col);
    return (map);
}

void error_file(int fd)
{
    if (fd == -1) {
        my_printf("USAGE : ./my_sokoban maps\n");
        exit (84);
    }
}