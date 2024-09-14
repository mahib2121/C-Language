
#include <stdio.h>
void fun(int i, int k)
{
    if (i == 0)
        return;
 
    printf("%d", i);
    if (i!=1){
        printf(" ");
    }
    fun(i - 1, k);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n,1);
    return 0;
}