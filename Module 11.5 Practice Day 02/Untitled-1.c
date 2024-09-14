#include<stdio.h>
#include<string.h>
int main (){
    char a[21];
    char b[21];
    scanf ("%s %s",a,b);
    int v=strcmp(a,b);
    if ( v<0 ){
        printf ("%s\n",a);

    }
    else{
        printf ("%s\n",b);
    }

    return 0;
}
