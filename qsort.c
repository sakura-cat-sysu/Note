#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    const int *p1 = (const int *)a;
    const int *p2 = (const int *)b;
    int num1 = *p1;
    int num2 = *p2;
    return num1 - num2;
}

int main()
{
    int arr[10] = {4, 2, 5, 6, 1, 3, 9, 10, 8, 7};
    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}