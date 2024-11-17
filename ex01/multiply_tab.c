#include <stdio.h>
#include <stdlib.h>

void    multiply_tab(int *tab, int l, int c)
{
    for (int i = 0; i < l; i++)
        tab[i] = tab[i] * c;
}

int     main()
{
    int tab[] = {1, 2, 3, 4};
    printf("%d\n", tab[2]);
    multiply_tab(tab, 4, 2);
    printf("%d\n", tab[2]);
}