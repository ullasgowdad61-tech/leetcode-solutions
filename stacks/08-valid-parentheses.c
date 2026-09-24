#include <stdio.h>

int main()
{
    char s[100];
    char stack[100];
    int top = -1;

    printf("Enter brackets: ");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                printf("Not Valid\n");
                return 0;
            }

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{'))
            {
                printf("Not Valid\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("Valid\n");
    else
        printf("Not Valid\n");

    return 0;
}