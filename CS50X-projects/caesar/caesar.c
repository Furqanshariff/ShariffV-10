#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);
    string s = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            char base = islower(s[i]) ? 'a' : 'A';
            printf("%c", ((s[i] - base + k) % 26) + base);
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
    return 0;
}
