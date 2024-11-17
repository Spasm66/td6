#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool    spm_to_hms(int spm, int *h, int *m, int *s)
{
    if (spm >= 86400)
        return (false);
    *h = spm / 3600;
    *m = (spm % 3600) / 60;
    *s = (spm % 3600) % 60;
    return (true);
}

int     main(int argc, char **argv)
{
    int     h;
    int     m;
    int     s;
    bool    w;
    (void)argc;
    w = spm_to_hms(atoi(argv[1]), &h, &m, &s);
    if (w)
        printf("%dh %dm %ds\n", h, m, s);
    else
        printf("format incorrecte\n");
}