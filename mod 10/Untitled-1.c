#include<stdio.h>
#include<string.h>
int main (){
    char s[1001],t[1001];
    scanf ("%s,%s",s,t );
    int LenS= strlen (s);
    int LenT= strlen (t);

    printf ("%d %d\n",LenS,LenT);
    printf ("%d %d\n",s,t);

    return 0;
}

