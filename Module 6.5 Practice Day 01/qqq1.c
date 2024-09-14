#include<stdio.h>

int main() {
    char ah;
    scanf("%c", &ah);
    
    if (ah == 'z') {
        printf("a\n");
    } else if (ah >= 'a' && ah < 'z') {
        ah = ah + 1;
        printf("%c\n", ah);
    }

    return 0;
}
