#include <stdio.h>

int main() {
    int Test;
    scanf("%d", &Test);

    for (int t = 0; t < Test; t++) {
        long long int result;
        int x, y, z;
        int gunfol;
        scanf("%lld %d %d %d", &result, &x, &y, &z);
        gunfol = x * y * z;

        if (gunfol != 0 && result % gunfol == 0) {
            printf("%lld\n", result / gunfol);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
