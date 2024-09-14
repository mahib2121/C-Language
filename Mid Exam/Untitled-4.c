#include<stdio.h>
#include<string.h>
int main (){
     int n ;
    scanf("%d",&n);
    for (int i =0;i<n;i++)
    
    
    {
    char a[100001];
    scanf("%s",a);

    int Count_A =0;
    int Count_a=0;
    long long int Number =0;


    int y =  strlen(a);

    for (int i =0; i<=y;i++){
        if (a[i]>='A'  && a[i] <= 'Z'){
            Count_A++;

        }
        if (a[i]>='a'&&a[i]<='z'){
            Count_a++;
        }
        if (a[i]>='0' && a[i]<= '100'){
            Number ++;
        }


    }
    printf ("%d %d %lld\n",Count_A,Count_a,Number);
}
    return 0;
}
