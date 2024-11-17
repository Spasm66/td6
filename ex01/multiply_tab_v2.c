#include <stdio.h>
#include <stdlib.h>

void    multiply_tab_v2(int *tab, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        *tab = *tab * c;
        tab++;
    }
}


int     main()
{
    int tab[] = {1, 2, 3, 7};
    printf("%d\n", tab[2]);
    multiply_tab_v2(tab, 4, 2);
    printf("%d\n", tab[2]);
}