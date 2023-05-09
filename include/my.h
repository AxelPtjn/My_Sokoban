/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <stdarg.h>
    #include <stdlib.h>
    #include <string.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <ncurses.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>

    typedef struct MAP {
        char **final_map;
        int pos_player[2];
        int nb_crate;
        char **pos_crate;
        char back;
    } MAP_T;

    int my_printf(const char *format, ...);
    int my_put_nbr(int n);
    void my_putchar(char c);
    int my_putstr(char const *str);
    int str_to_int(char *str);
    int my_put_table(char **str, MAP_T *SKB);
    int my_strlen(const char str[]);
    void create_table(int ac, char **av, MAP_T *SKB);
    int main(int ac, char **av);
    void affiche_map(MAP_T *SKB);
    void transforme_map(char *game_map, MAP_T *SKB);
    void get_condition(MAP_T *SKB, int get_getch);
    void condition_up(MAP_T *SKB, int get_getch);
    void condition_down(MAP_T *SKB, int get_getch);
    void condition_right(MAP_T *SKB, int get_getch);
    void condition_left(MAP_T *SKB, int get_getch);
    void get_pos_player(char *game_map, MAP_T *SKB);

#endif /* !__MY_H__ */
