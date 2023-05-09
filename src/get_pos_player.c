/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-SKB-axel.petitjean
** File description:
** get_pos_palyer
*/

#include "../include/my.h"

void get_pos_player(char *game_map, MAP_T *SKB)
{
    int i = 0;
    SKB->pos_player[1] = 0;
    SKB->pos_player[0] = 0;
    while (game_map[i] != '\0' && game_map[i] != 'P') {
        if (game_map[i] == '\n') {
            SKB->pos_player[0] += 1;
            SKB->pos_player[1] = 0;
        } else {
            SKB->pos_player[1] += 1;
        }
        i = i + 1;
    }
}
