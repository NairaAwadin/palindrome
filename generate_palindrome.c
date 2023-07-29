/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** generate_palindrome
*/

#include "my.h"

int reverse_int(int nb, int base)
{
    if (nb < 0)
        return 84;
    int reverse = 0;
    while (nb != 0) {
        int rest = nb % base;
        reverse = reverse * base + rest;
        nb /= base;
    }
    return reverse;
}

int is_palindrome(int nb, int base)
{
    int reverse = reverse_int(nb, base);
    if (nb == reverse) {
        return 1;
    } else {
        return 0;
    }
}

int generate_palindrome(int nb, int base, int imax)
{
    int iteration = 0;
    while (is_palindrome(nb, base) == 0 && (imax == 100 || iteration <= imax)) {
        int reverse = reverse_int(nb, base);
        nb = nb + reverse;
        iteration++;
    }
    return nb;
}

int generate_iteration(int nb, int base, int imax)
{
    int iteration = 0;
    while (is_palindrome(nb, base) == 0 && (imax == 100 || iteration <= imax)) {
        int reverse = reverse_int(nb, base);
        nb = nb + reverse;
        iteration++;
    }
    return iteration;
}
