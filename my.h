/*
** EPITECH PROJECT, 2023
** B-SYN-200-PAR-2-1-palindrome-naira.awadin
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <ctype.h>

int reverse_int(int nb, int base);
int is_palindrome(int nb, int base);
int generate_palindrome(int nb, int base, int imax);
int generate_iteration(int nb, int base, int imax);
int generate_palindrome_p(int nb, int base, int imax, int a);
int generate_iteration_p(int nb, int base, int imax, int a);
int errors_handle(char **av);
int get_base(char **av);
int get_imax(char **av);
int get_imin(char **av);
int print_n(char **av);
int print_p(char **av);
int all_print_func(char **av);
int imax_imax(char **av, int i, int imax);
int imin_imin(char **av, int i, int imin);
#endif
