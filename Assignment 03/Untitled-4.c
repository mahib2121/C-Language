#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
    int len = strlen(s);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char S[1001];

    scanf("%s", S);

    int rel = is_palindrome(S);

    if (rel == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
