#include <cstdio>
#include <cstring>

int main(){
    char a[1010];
    int b;
    scanf("%s %d", a, &b);
    int ans[1010];
    int size = strlen(a);
    int carry = 0;
    int pos = 0;
    for(int i = 0; i < size; ++i){
        carry = carry * 10 + (a[i] - '0');
        ans[pos++] = carry / b;
        if(carry < b)
            continue;
        carry %= b;
    }
    int pre = 0;
    while(ans[pre] == 0)
        pre++;
    
    for(int i = pre; i < pos; ++i){
        printf("%d", ans[i]);
    }
    if(pos == 1 && ans[0] == 0){
        printf("%d", ans[0]);
    }
    printf(" %d", carry);
    return 0;
}
