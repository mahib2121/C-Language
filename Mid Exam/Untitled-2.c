#include<stdio.h>
#include<string.h>
int main (){
    char a[100001];
    scanf("%s" ,&a);
    int conCount =0;
    int y =  strlen(a);
    for (int i = 0; i < y; i++)
    {
        /* code */if (a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'){
            conCount++;
        }
    }

    printf("%d",conCount);
    
    return 0;
}
