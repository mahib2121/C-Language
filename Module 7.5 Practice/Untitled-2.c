#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int x ;
    scanf("%d",&x);
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (array [i]==x){
            ans=i;
            break;
        }
    }

    printf ("%d",ans);
   

    
    return 0;
    

}