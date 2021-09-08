/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** error.c
*/
#include "../game/my_sokoban.h"

int block_v(int block, char random)
{
    if (random == 'X')
        return (block + 1);
    return (block);
}

int limit_v(int limit, char random)
{
    if (random == '#')
        return (limit + 1);
    return (limit);
}

int target_v(int target, char random)
{
    if (random == 'O')
        return (target + 1);
    return (target);
}

int player_v(int player, char random)
{
    if (random == 'P')
        return (player + 1);
    return (player);
}

void invalid_map(char **map, int sizemap)
{
    int y = 0;
    int x = 0;
    int block = 0;
    int limit = 0;
    int target = 0;
    int player = 0;

    while (y != sizemap) {
        block = block_v(block, map[y][x]);
        limit = limit_v(limit, map[y][x]);
        target = target_v(target, map[y][x]);
        player = player_v(player, map[y][x]);
        x++;
        if (map[y][x] == '\n') {
            x = 0;
            y++;
        }
    }
    block_e(block, target);
    limit_e(limit, player);
}