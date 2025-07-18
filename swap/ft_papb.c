#include "../src/push_swap.h"

void ft_pb(int *a, int *b, int *size_a, int *size_b)
{
    if (*size_a == 0)
        return;

    // Décale b vers la droite pour insérer en début
    for (int i = *size_b; i > 0; i--)
        b[i] = b[i - 1];

    b[0] = a[0];

    // Décale a vers la gauche pour supprimer a[0]
    for (int i = 0; i < *size_a - 1; i++)
        a[i] = a[i + 1];

    (*size_a)--;
    (*size_b)++;

	ft_printf("pb\n");
}

void ft_pa(int *a, int *b, int *size_a, int *size_b)
{
    if (*size_b == 0)
        return;

    // Décale a vers la droite pour insérer en début
    for (int i = *size_a; i > 0; i--)
        a[i] = a[i - 1];

    a[0] = b[0];

    // Décale b vers la gauche pour supprimer b[0]
    for (int i = 0; i < *size_b - 1; i++)
        b[i] = b[i + 1];

    (*size_b)--;
    (*size_a)++;
	ft_printf("pa\n");
}
