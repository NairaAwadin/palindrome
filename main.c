/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac < 2 || ac > 9 || ac == 4) {
        printf("invalid argument\n");
        return 84;
    }
    if (strcmp(av[1], "-n") != 0 && strcmp(av[1], "-p") != 0) {
        printf("invalid argument\n");
        return 84;
    }
    if (all_print_func(av) == 84)
        return 84;
}
