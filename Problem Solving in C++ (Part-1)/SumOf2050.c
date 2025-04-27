#include<stdio.h>
int main() {
        long long int t;
        scanf("%lld", &t);

        while(t--) {
            long long int n;
            scanf("%lld", &n);
            int ans = 0;

            while (n >= 2050) {
                ans++;
                long long int x = 2050;

                while(x <= n) {
                    x *= 10;
                }

                x /= 10;
                n = n - x;
            }
            if(n != 0) {
                printf("-1");
            }
            else {
                printf("%d", ans);
            }
        }

    return 0;
}
