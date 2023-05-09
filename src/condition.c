/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-SKB-axel.petitjean
** File description:
** condition
*/
#include "../include/my.h"

void condition_up(MAP_T *SKB, int get_getch)
{
    if (SKB->final_map[SKB->pos_player[0] - 1]
    [SKB->pos_player[1]] == 'X' && SKB->final_map[SKB->pos_player[0] - 2]
    [SKB->pos_player[1]] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = ' ';
        SKB->final_map[SKB->pos_player[0] - 1][SKB->pos_player[1]] = 'P';
        SKB->final_map[SKB->pos_player[0] - 2][SKB->pos_player[1]] = 'X';
        SKB->pos_player[0] -= 1;
    } else if (SKB->final_map[SKB->pos_player[0] - 1]
    [SKB->pos_player[1]] != 'X' && SKB->final_map[SKB->pos_player[0] - 1]
    [SKB->pos_player[1]] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = SKB->back;
        SKB->back = SKB->final_map[SKB->pos_player[0] - 1][SKB->pos_player[1]];
        SKB->final_map[SKB->pos_player[0] - 1][SKB->pos_player[1]] = 'P';
        SKB->pos_player[0] -= 1;
    }
}

void condition_down(MAP_T *SKB, int get_getch)
{
    if (SKB->final_map[SKB->pos_player[0] + 1]
    [SKB->pos_player[1]] == 'X' && SKB->final_map[SKB->pos_player[0] + 2]
    [SKB->pos_player[1]] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = ' ';
        SKB->final_map[SKB->pos_player[0] + 1][SKB->pos_player[1]] = 'P';
        SKB->final_map[SKB->pos_player[0] + 2][SKB->pos_player[1]] = 'X';
        SKB->pos_player[0] += 1;
    } else if (SKB->final_map[SKB->pos_player[0] + 1]
    [SKB->pos_player[1]] != 'X' && SKB->final_map[SKB->pos_player[0] + 1]
    [SKB->pos_player[1]] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = SKB->back;
        SKB->back = SKB->final_map[SKB->pos_player[0] + 1][SKB->pos_player[1]];
        SKB->final_map[SKB->pos_player[0] + 1][SKB->pos_player[1]] = 'P';
        SKB->pos_player[0] += 1;
    }
}

void condition_right(MAP_T *SKB, int get_getch)
{
    if (SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] + 1] == 'X' && SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] + 2] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = ' ';
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] + 1] = 'P';
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] + 2] = 'X';
        SKB->pos_player[1] += 1;
    } else if (SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] + 1] != 'X' && SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] + 1] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = SKB->back;
        SKB->back = SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] + 1];
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] + 1] = 'P';
        SKB->pos_player[1] += 1;
    }
}

void condition_left(MAP_T *SKB, int getch)
{
    if (SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] - 1] == 'X' && SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] - 2] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = ' ';
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] - 1] = 'P';
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] - 2] = 'X';
        SKB->pos_player[1] -= 1;
    } else if (SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] - 1] != 'X' && SKB->final_map[SKB->pos_player[0]]
    [SKB->pos_player[1] - 1] != '#') {
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1]] = SKB->back;
        SKB->back = SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] - 1];
        SKB->final_map[SKB->pos_player[0]][SKB->pos_player[1] - 1] = 'P';
        SKB->pos_player[1] -= 1;
    }
}
