#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];

    gets(s);

    char last = s[strlen(s) - 1];

    if (last == '.')
    {
        printf("%s\n", s);
    }
    else
    {
        printf("%s.\n", s);
    }

    return 0;
}