#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int ans = 0;
    while(n != 1){
        n = n % 2 ? (3 * n + 1) / 2 : n / 2;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}