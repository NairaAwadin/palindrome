/*
** EPITECH PROJECT, 2023
** syn
** File description:
** requirement
*/

int my_factrec_synthesis(int nb)
{
    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 0 || nb == 1) {
        return (1);
    }
    return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    if (nb < 0) {
        return (-1);
    }
    if (nb == 0 || nb == 1) {
        return (nb);
    }

    for (int sqr_nb = 0; sqr_nb * sqr_nb <= nb; sqr_nb++) {
        if (sqr_nb * sqr_nb == nb) {
            return (sqr_nb);
        }
    }
    return (-1);
}
