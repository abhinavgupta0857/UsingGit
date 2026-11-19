// Read n number of values in an array and display them in reverse order.
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[n - i - 1]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}