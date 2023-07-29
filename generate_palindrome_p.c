/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin (copy 1)
** File description:
** generate_palindrome_p
*/

#include "my.h"

int generate_palindrome_p(int nb, int base, int imax, int a)
{
    int iteration = 0;
    while (imax == 100 && iteration <= imax && a != nb) {
        if (nb == a && is_palindrome(a, base) == 1)
            break;
        int reverse = reverse_int(a, base);
        a = a + reverse;
        iteration++;
    }
    return a;
}

int generate_iteration_p(int nb, int base, int imax, int a)
{
    int iteration = 0;
    while (imax == 100 && iteration <= imax && a != nb) {
        if (nb == a && is_palindrome(a, base) == 1)
            break;
        int reverse = reverse_int(a, base);
        a = a + reverse;
        iteration++;
    }
    return iteration;
}
