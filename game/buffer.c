/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** buffer.c
*/
#include "my_sokoban.h"

char *buff(char *filepath)
{
    int i = 0;
    char *buffer = NULL;
    int fd = 0;
    char *temp = malloc(sizeof(char) * 2);
    int tmp = open(filepath, O_RDONLY);

    if (tmp == -1)
        exit (84);
    for (i = 0; read(tmp, temp, 1); i++)
        ;
    i++;
    close(tmp);
    fd = open(filepath, O_RDONLY);
    buffer = malloc((sizeof(char) * i));
    read(fd, buffer, i);
    buffer[i] = '\0';
    close(fd);

    return (buffer);
}