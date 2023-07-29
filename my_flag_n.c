/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** flags
*/

#include "my.h"

int print_n(char **av)
{
    if (errors_handle(av) == 84)
        return 84;
    int nb = atoi(av[2]); int base = get_base(av);
    int imax = get_imax(av); int imin = get_imin(av);
    if (imax == 84)
        return 84;
    if (base == 84)
        return 84;
    if (imin == 84)
        return 84;
    if (imin != 0 && imax != 100 && imin > imax || imax > 100) {
        printf("invalid argument\n");
        return 84; }
    int palindrome = generate_palindrome(nb, base, imax);
    int iteration = generate_iteration(nb, base, imax);
    if ((imax != 100 && iteration > imax) || (imin != 0 && iteration < imin)) {
        printf("no solution\n");
    } else {
        printf("%d leads to %d in %d iteration(s) in base %d\n", nb,
        palindrome, iteration, base); }
}
