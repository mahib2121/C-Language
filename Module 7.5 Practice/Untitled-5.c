#include<stdio.h>
int main (){
    int n;
    scanf ("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }

    int A1[n];

    for (int i = 0; i < n; i++)
    {
        A1[i] = arr[n-i-1];
    }

    for (int i = 0; i < n; i++)
    {
      printf ("%d ", A1[i]);
    }
    
    return 0;
}
