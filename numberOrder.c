#include <stdio.h>

int main()
{
    int arr[] = {0, 1, 2, 0, 3};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr1[size];
    int index=0;


    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr1[index]=arr[i];
            index++;
        }
    }
    for (int i = index; i < size; i++)
    {
        arr1[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
}