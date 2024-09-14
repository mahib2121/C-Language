#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    for (int i =0;i<n;i++)
    
    
    {
    int p ;
    int d;
    int y ;
    scanf("%d %d %d",&p,&y ,&d);
    int x ;
    x= p*d;
    


    int k =y+p;
    int temp = x/k;
    int day = d-temp ;
    printf("%d\n",day);
    }
    return 0;
}
