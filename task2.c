#include <stdio.h>
#define SIZE 5

void is_minDigit(int *arr, int len)
{
    int min = 1, tmp = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < arr[min])
        {
            tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
    printf("%d\n", arr[min]);
}

int main(void)
{
    int arr[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    is_minDigit(arr, SIZE);

    return 0;
}