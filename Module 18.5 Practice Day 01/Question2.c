#include <stdio.h>
void fun(int i, int k)
{
    if (i == k + 1)
        return;

    printf("%d\n", i);
    fun(i + 1, k);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}