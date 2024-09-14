#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int array[n];

    for (int i =0;i <n ;i ++){
        scanf("%d",&array[i]);
    }
    
    long long int sum =0;

    for (int  i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    long long int y =0;
    if (sum < 1)
    {
        y = sum *(-1);
        printf("%lld",y );

    }
    else {
      printf("%lld",sum );
    }
    
    
  
    return 0;
}
