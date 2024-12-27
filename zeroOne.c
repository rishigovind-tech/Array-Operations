#include<stdio.h>

int main(){
    int arr[]={1,0,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1){
            count++;
        }
        
    }
    for (int i = 0; i < count; i++)
    {
        arr[i]=1;
    }
    for (int i = count; i < size; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}