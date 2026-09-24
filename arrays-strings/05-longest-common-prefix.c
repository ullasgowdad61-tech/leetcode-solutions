#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str[100][100];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    int j = 0;

    while (str[0][j] != '\0')
    {
        for (int i = 1; i < n; i++)
        {
            if (str[i][j] != str[0][j])
            {
                str[0][j] = '\0';
                break;
            }
        }

        if (str[0][j] == '\0')
            break;

        j++;
    }

    printf("Longest Common Prefix: %s\n", str[0]);

    return 0;
}