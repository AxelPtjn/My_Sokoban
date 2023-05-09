/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-SKB-axel.petitjean
** File description:
** main
*/

#include "../include/my.h"

void affiche_map(MAP_T *SKB)
{
    int get_getch = 0;
    initscr();
    while (get_getch != 32) {
        noecho();
        for (int i = 0; SKB->final_map[i] != NULL; i++) {
            mvprintw(i, 0, SKB->final_map[i]);
        }
        get_getch = getch();
        get_condition(SKB, get_getch);
        refresh();
    }
    endwin();
}

int main(int ac, char **av)
{
    MAP_T *SKB = malloc(sizeof(MAP_T));
    if (ac == 1) {
        my_printf("Too few arguments\n");
        free(SKB);
        return 84;
    } else if (ac > 2) {
        my_printf("No such file or directory\n");
        free(SKB); return 84;
    }
    if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        my_printf("USAGE\n\t./my_SKB map\nDESCRIPTION\n");
        my_printf("\tmap file representing the warehouse ");
        my_printf("map, containing '#' for walls,\n");
        my_printf("\t'P' for the player, 'X' for boxes and 'O'");
        my_printf(" for storage locations.\n");
    } else {
        create_table(ac, av, SKB);
        free(SKB); return 0;
    }
    free(SKB); return 0;
}
