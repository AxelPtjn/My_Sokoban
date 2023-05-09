/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-SKB-axel.petitjean
** File description:
** create_table
*/
#include "../include/my.h"

int nb_line(char *game_map)
{
    int line = 0;
    int compteur;
    for (compteur = 0; game_map[compteur] != '\0'; compteur++) {
        if (game_map[compteur] == '\n') {
            line = line + 1;
        }
    }
    return line;
}

int nb_column(char *game_map)
{
    int column = 0;
    int retour_line = 0;
    for (int y = 0; game_map[y] != '\n'; y++) {
        column = column + 1;
    }
    return column;
}

void remplir_table(char *game_map, MAP_T *SKB)
{
    int i;
    int y = 0;
    int z = 0;
    for (i = 0; game_map[i] != '\0'; i++) {
        while (game_map[i] != '\n') {
            SKB->final_map[y][z] = game_map[i];
            z = z + 1;
            i = i + 1;
        }
        i = i + 1;
        z = 0;
        y = y + 1;
    }
}

void transforme_map(char *game_map, MAP_T *SKB)
{
    int i = 0;
    int line = nb_line(game_map);
    int column = 0;
    SKB->final_map = malloc(sizeof(char *) * (line + 1));
    for (int y = 0; y != line; y++) {
        column = nb_column(game_map + i);
        SKB->final_map[y] = malloc(sizeof(char) * (column + 1));
        for (int z = 0; z != column; z++) {
            SKB->final_map[y][z] = game_map[i];
            i++;
        }
        i = i + 1;
    }
    SKB->back = ' ';
    affiche_map(SKB);
}

void create_table(int ac, char **av, MAP_T *SKB)
{
    char *filepath = av[1];
    struct stat *file = malloc(sizeof(struct stat));
    stat(filepath, file);
    char *game_map = malloc(file->st_size + 1);
    int fd = open(filepath, O_RDONLY);
    read(fd, game_map, file->st_size);
    close(fd);
    get_pos_player(game_map, SKB);
    transforme_map(game_map, SKB);
    free(game_map);
    for (int i = 0; SKB->final_map[i] != NULL; i++) {
        free(SKB->final_map[i]);
    }
    free(SKB->final_map);
    free(file);
}
