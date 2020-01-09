#include <cstdio>
#include <stack>

using namespace std;

int a[100010][4];

int main(){
    int head, n, k;
    scanf("%d %d %d", &head, &n, &k);
    for(int i = 0; i < n; ++i){
        int addr, value, next;
        scanf("%d %d %d", &addr, &value, &next);
        a[addr][0] = value;
        a[addr][1] = next;
        a[addr][2] = addr;
    }
    int pos = head;
    for(int i = 0; i < n; ++i){ //并非所有节点都有效
        a[pos][4] = 1;
        pos = a[pos][1];
    }

    stack<int> s;
    int pre = head;
    bool isPrint = false;
    while(n >= k){
        for(int i = 0; i < k; ++i){
           s.push(pre);
           pre = a[pre][1];
           n--;
        }
        for(int i = 0; i < k; ++i){
            int tem = s.top();
            s.pop();
            if(!isPrint){
                printf("%05d %d ", a[tem][2], a[tem][0]);
                isPrint = true;
            } else {
                printf("%05d\n%05d %d ", tem, tem, a[tem][0]);
            }
        }
    }
    while(n > 0){
        if(!isPrint){
            printf("%05d %d ", a[pre][2], a[pre][0]);
            isPrint = true;
        } else {
            printf("%05d\n%05d %d ", pre, pre, a[pre][0]);
        }
        pre = a[pre][1];
        n--;
    }
    printf("-1\n");
    return 0;
}
