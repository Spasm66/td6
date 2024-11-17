#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb_occurences(char *str, char c)
{
    int     count;
    char    *p;

    count = 0;
    if (strlen(str) == 0)
    {
        fprintf(stderr, "chaine vide\n");
        exit(EXIT_FAILURE);
    }
    for(p=str; *(p) != '\0'; p=p+1)
    {
        if (*p == c)
            count++;
    }
    return (count);
}

char *replace_occurences(char *str, char c, char r)
{
    char    *p;

    if (strlen(str) == 0)
    {
        fprintf(stderr, "chaine vide\n");
        exit(EXIT_FAILURE);
    }
    for (p = str; *(p) != '\0'; p=p+1)
    {
        if (*p == c)
            *p = r;
    }
    return (*(p - str));
}

int main(int argc, char **argv) 
{
    (void)argc;
    printf("%s\n", replace_occurences(argv[1], argv[2][0], argv[3][0]));
}