#include <stdio.h>
#define SIZE 5

void average(int *arr, int len)
{
    float sum = 0, res = 0;

    for (int i = 0; i < len; i++)
        sum += arr[i];
    res = sum / SIZE;

    printf("%.3f", res);
}

int main(void)
{
    int arr[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    average(arr, SIZE);

    return 0;
}