/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** palindrome
*/

#include "my.h"

int all_print_func(char **av)
{
    if (strcmp(av[1], "-n") == 0) {
        if (print_n(av) == 84)
            return 84;
    }

    if (strcmp(av[1], "-p") == 0) {
        if (print_p(av) == 84)
            return 84;
    }
    if (strcmp(av[1], "-p") != 0 && strcmp(av[1], "-n") != 0)
        return 84;
    return 0;
}
