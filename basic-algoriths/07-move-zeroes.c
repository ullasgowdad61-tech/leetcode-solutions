#include <stdio.h>

int main()
{
    int n, nums[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[pos] = nums[i];
            pos++;
        }
    }

    while (pos < n)
    {
        nums[pos] = 0;
        pos++;
    }

    printf("After moving zeroes: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}