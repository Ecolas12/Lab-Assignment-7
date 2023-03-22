#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int count = 0;
    printf("\nUsing Bubble sort\n\n");
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        count = 0;
        printf("For pass %d ", i+1);
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // then swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
        printf("%d \n", count);
    }
}

int main()
{
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bubbleSort(arr, 9);

    return 0;
}