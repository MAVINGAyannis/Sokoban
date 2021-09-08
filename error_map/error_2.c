/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** error_2.c
*/
#include "../game/my_sokoban.h"

void block_e(int block, int target)
{
    target_e(target, block);
    if (block = 0 || block != target) {
        my_printf("Invalid map.\n");
        exit (84);
    }
}

void limit_e(int limit, int player)
{
    player_e(player);
    if (limit == 0) {
        my_printf("Invalid map.\n");
        exit (84);
    }
}

void target_e(int target, int block)
{
    if (target = 0 || target != block) {
        my_printf("Invalid map.\n");
        exit (84);
    }
}

void player_e(int player)
{
    if (player != 1) {
        my_printf("Invalid map.\n");
        exit (84);
    }
}