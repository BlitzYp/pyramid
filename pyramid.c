#include <stdio.h>

int main()
{
    int count;
    char chr;
    scanf("%d %c", &count, &chr);
    for (int i = 0; i < count / 2; i++)
    {
        printf(" ");
    }
    printf("%c\n", chr);

    for (int i = count / 2 - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c", chr);
        for (int j = i; j < count - i - 1; j++)
        {
            printf("%c", chr);
        }
        printf("%c", chr);
        printf("\n");
    }

    for (int i = 0; i < count + 1; i++)
    {
        printf("%c", chr);
    }

    puts("");
    return 0;
}
