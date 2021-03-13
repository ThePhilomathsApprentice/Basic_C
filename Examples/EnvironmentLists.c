/*

* C Program to Print Environment variables

*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[], char *envp[])
{

    
    printf("Number of arguments::%d\n", argc);

    printf("Arguments::\n");
    for (int i = 0; argv[i] != NULL; i++)
    {
        printf("%s\n", argv[i]);
    }

    printf("Environemnt Variables::\n");
    for (int i = 0; envp[i] != NULL; i++)
    {
        printf("%s\n", envp[i]);
    }
}
