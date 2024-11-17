#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool    hms_to_spm(int h, int m, int s, int *res)
{
    if (!(h <= 23 && m <= 59 && s <= 59))
        return (false);
    *res = h * 3600 + m * 60 + s;
    return (true);
}

int     main(int argc, char **argv)
{
    int     res;
    bool    w;
    (void)argc;
    w = hms_to_spm(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), &res);
    if (w)
        printf("%d\n", res);
    else
        printf("format incorrecte\n");
}
