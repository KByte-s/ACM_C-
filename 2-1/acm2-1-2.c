#include <stdio.h>
int gcd(int x, int y) {
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}  
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        int m, lcm, check;
        scanf("%d", &m);
        scanf("%d", &lcm);
        for (j = 1; j < m; ++j) {
            scanf("%d", &check);
            lcm = (lcm / gcd(lcm, check)) * check;
        }
        printf("%d\n", lcm);
    }
}