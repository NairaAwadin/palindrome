/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** get_base
*/

#include "my.h"

int base_base(char **av, int i, int base)
{
    if (strcmp(av[i], "-b") == 0) {
        if (av[i + 1] == NULL) {
            printf("invalid argument\n");
            return 84;
        }
        base = atoi(av[i + 1]);
        if (base <= 1 || base > 10) {
            printf("invalid argument\n");
            return 84;
        }
    }
    return base;
}

int get_base(char **av)
{
    int tmp_base = 0;
    int base = 10;
    for (int i = 2; av[i] != NULL; i++) {
        tmp_base = base_base(av, i, base);
        base = tmp_base;
        if (tmp_base == 84)
            return 84;
    }
    return base;
}
