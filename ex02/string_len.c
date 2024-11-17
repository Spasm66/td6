#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nb_occurences(char *str, char c)
{
    int count;

    count = 0;
    if (strlen(str) == 0)
    {
        fprintf(stderr, "chaine vide\n");
        exit(EXIT_FAILURE);
    }
    for (int i=0; *(str+i) != '\0'; i=i+1)
    {
        if (*(str + i) == c)
            count++;
    }
    return (count);
}

char *replace_occurences(char *str, char c, char r)
{
    if (strlen(str) == 0)
    {
        fprintf(stderr, "chaine vide\n");
        exit(EXIT_FAILURE);
    }
    for (int i=0; *(str+i) != '\0'; i=i+1)
    {
        if (*(str + i) == c)
            *(str + i) = r;
    }
    return (str);
}

int main(int argc, char **argv) 
{
    (void)argc;
    printf("%s\n", replace_occurences(argv[1], argv[2][0], argv[3][0]));
}