#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int search;
    scanf("%d", &search);
    int low = 0;
    int high = n - 1;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (a[mid] == search)
        {
            index = mid;
            break;
        }
        else if (a[mid] > search)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Occurance of %d is at index: %d\n", search, index);
    return 0;
}