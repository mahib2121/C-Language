#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
         if(arr[i]==0)  {
            arr[i]=0;

        }        



         else if (arr[i]<1){
            arr[i]=2;
        }

        else {
            arr[i]= 1;
        }
    }

    for (int i =0 ;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
