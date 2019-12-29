#include <cstdio>

#define MAX 100010

int a[MAX] = {0};

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        int school, score;
        scanf("%d %d", &school, &score);
        a[school] += score;
    }
    int maxPos = 0;
    int maxScore = 0;
    for(int i = 0; i < MAX; ++i){
        if(a[i] > maxScore){
            maxPos = i;
            maxScore = a[i];
        }
    }
    printf("%d %d\n", maxPos, maxScore);
    return 0;
}