/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin (copy 1)
** File description:
** my_flag_p
*/

#include "my.h"

int get_imin_p (char **av, int i, int imin)
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
        if (imin == 0 && strcmp(av[i + 1], "0") != 0) {
            printf("invalid argument\n");
            return 84;
        }
    }
    return imin;
}

int get_imax_p (char **av, int i, int imax)
{
    if (strcmp(av[i], "-imax") == 0) {
        if (av[i + 1] == NULL) {
            printf("invalid argument\n");
            return 84;
        }
        imax = atoi(av[i + 1]);
        if (imax < 0) {
            printf("invalid argument\n");
            return 84;
        }
        if (imax == 0 && strcmp(av[i + 1], "0") != 0) {
            printf("invalid argument\n");
            return 84;
        }
    }
    return imax;
}

int find_solu(char **av, int imax, int imin, int base)
{
    int nb = atoi(av[2]);
    int solu = 0;
    for (int a = 0; a <= nb; a++) {
        int iteration = generate_iteration_p(nb, base, 100, a);
        if (iteration >= imin && iteration <= imax) {
            int palindrome = generate_palindrome_p(nb, base, 100, a);
            if (palindrome == nb) {
                printf("%d leads to %d in %d iteration(s) in base %d\n", a, nb, iteration, base);
                solu = 1;
            }
        }
    }
    return solu;
}

int print_p(char **av)
{
    if (errors_handle(av) == 84)
        return 84;
    int base = 0; int imin = 0; int imax = 100;
    for (int i = 2; av[i] != NULL; i++) {
        imin = get_imin_p(av, i, imin); imax = get_imax_p(av, i, imax);
        if (imin == 84 && imax == 84)
            return 84;
        if (strcmp(av[i], "-b") == 0) {
            if (av[i + 1] == NULL) {
                return 84; }
            base = atoi(av[i + 1]);
            if (base < 2 || base > 10) {
                return 84;
            } } }
    if (imin > imax) {
        printf("invalid argument\n");
        return 84; }
    if (find_solu(av, imax, imin, base) == 0) {
        printf("no solution\n");
    } return 0;
}
