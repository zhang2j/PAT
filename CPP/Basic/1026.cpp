#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    const double CLK_TCK = 100.0;
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = round((b - a) /CLK_TCK);
    printf("%02d:%02d:%02d", ans / 3600, (ans % 3600) / 60, ans % 3600 % 60);
    return 0;
}
