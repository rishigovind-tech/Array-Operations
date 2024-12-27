#include <stdio.h>

int main()
{
    int arr[50];
    int size = 5;
    int ele;

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d value: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &ele);

    int found=0;



    for (int i = 0; i < size; i++)
    {
       if (ele==arr[i])
       {
        found=i;
        break;
       }
       
    }

    if(found){
        printf("element at position '%d' ",found);

    }
    else
    {
        printf("the elements you are looking is not found");
    }
}