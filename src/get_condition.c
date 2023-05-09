/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-SKB-axel.petitjean
** File description:
** condition
*/
#include "../include/my.h"

void get_condition(MAP_T *SKB, int get_getch)
{

    if (get_getch == 65)
        condition_up(SKB, get_getch);
    if (get_getch == 66)
        condition_down(SKB, get_getch);
    if (get_getch == 67)
        condition_right(SKB, get_getch);
    if (get_getch == 68)
        condition_left(SKB, get_getch);
}
