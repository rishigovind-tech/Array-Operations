# include<stdio.h>

int main(){

    int arr[]={2,3,5,20,7,8,15};
    
    int size=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)

    {
        if (arr[i]%5==0)
        {
            arr[i]=10;
            
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    
    
}