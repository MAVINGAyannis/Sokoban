/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_sokoban.h
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ncurses.h>

typedef struct Variables Variables;
struct Variables
{
    int key;
};

void printmap(char **map, int sizemap);

char **txt_to_map(char **map, char *buffer);

void error_file(int fd);

char **the_malloc(char **map, int sizemap, int col);

int how_size(char *buffer, int sizemap);

int how_col(char *buffer, int col);

char **mover(char **map, int sizemap, char **map2);

void game(char **map, int sizemap, char **map2);

int right(char **map, int key, char **map2);

int left(char **map, int key, char **map2);

int low(char **map, int key, char **map2);

int high(char **map, int key, char **map2);

int winner(char **map, int sizemap, char **map2);

char *buff(char *filepath);

char **the_malloc_2(char **map2, int sizemap, int col);

char **txt_to_map_2(char **map2, char *buffer);

char **player_reset(char **map2, int sizemap);

char **block_reset(char **map2, int sizemap);

void block_e(int block, int target);

void limit_e(int limit, int player);

void target_e(int target, int block);

void player_e(int player);

void invalid_map(char **map, int sizemap);

int player_v(int player, char random);

int target_v(int target, char random);

int limit_v(int limit, char random);

int block_v(int block, char random);

void wrong_map(char *buffer, int v);

void space_exit(int key);