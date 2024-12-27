// Write the code to reverse the array and remove all the multiples of ‘3’ from it


#include<stdio.h>

int main(){

    int arr[]={1,2,3,5,6,7,8,9,15,17};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr1[50];
    int index=0;

    for (int i = size-1; i >=0; i--)
    {
        if(arr[i]%3!=0){

            arr1[index]=arr[i];
            index++;

        }
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d,",arr1[i]);
    }
    
    
    
}