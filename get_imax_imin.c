/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** get_imax
*/

#include "my.h"

int imax_imax(char **av, int i, int imax)
{
    if (strcmp(av[i], "-imax") == 0) {
        if (av[i + 1] == NULL) {
            printf("invalid argument\n");
            return 84;
        }
        imax = atoi(av[i + 1]);
        if (imax < 0) {
            printf("invalid argument\n");
            return 84;;
        }
    }
    return imax;
}

int get_imax(char **av)
{
    int tmp_imax = 0;
    int imax = 100;
    for (int i = 2; av[i] != NULL; i++) {
        tmp_imax = imax_imax(av, i, imax);
        imax = tmp_imax;
        if (tmp_imax == 84)
            return 84;
    }
    return imax;
}

int imin_imin(char **av, int i, int imin)
{
    if (strcmp(av[i], "-imin") == 0) {
        if (av[i + 1] == NULL) {
            printf("invalid argument\n");
            return 84;
        }
        imin = atoi(av[i + 1]);
        if (imin < 0) {
            printf("invalid argument\n");
            return 84;
        }
    }
    return imin;
}

int get_imin(char **av) {
    int tmp_imin = 0;
    int imin = 0;
    for (int i = 2; av[i] != NULL; i++) {
        tmp_imin = imin_imin(av, i, imin);
        imin = tmp_imin;
        if (tmp_imin == 84)
            return 84;
    }
    return imin;
}
