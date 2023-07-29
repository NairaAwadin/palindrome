/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** errors_handle
*/

#include "my.h"

int errors_handle(char **av)
{
    if (av[2] == NULL) {
        printf("invalid argument\n");
        return 84;
    }
    for (int i = 0; av[2][i] != '\0'; i++) {
        if (!isdigit(av[2][i])) {
            printf("invalid argument\n");
            return 84;
        }
    }
    return 0;
}
