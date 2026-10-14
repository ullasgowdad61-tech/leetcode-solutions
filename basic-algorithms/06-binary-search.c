#include <stdio.h>

int main()
{
    int n, target;
    int nums[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            result = mid;
            break;
        }
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    printf("Index: %d\n", result);

    return 0;
}
