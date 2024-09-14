#include<stdio.h>
int main (){
    int n;
    scanf ("%d",&n);
    int sum_p=0;
    int sum_n=0;

    int arr[n];
    

    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i]>0){
            sum_p=sum_p+arr[i];
        }
        else{
            sum_n= sum_n+arr[i];
        }
    }
    printf ("%d %d\n",sum_p,sum_n);






    return 0;
}
