#include<stdio.h>
int main (){
    int n ;
    scanf("%d ",&n);
   int arr[n];
   int sum=0;
   for (int i =1 ;i <n; i++){
       scanf("%d ",&arr[i]);
       sum = arr[i]+sum ;
   }
   printf ("%d ", sum );

    return 0;
}
