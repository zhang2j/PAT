#include <cstdio>

int main() {
    int n;
    int aWin = 0, tie = 0;
    int aHand[3] = {0, 0, 0};
    int bHand[3] = {0, 0, 0};

    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; ++i) {
        char a, b;
        scanf("%c %c", &a, &b);
        getchar(); //don't fotget use getchar() to absorb the /n
        switch(a) {
            case 'J': {
                if(b == 'B') {
                    aWin++;
                    aHand[2]++;
                } else if(b == 'C') {
                    bHand[1]++;
                } else {
                    tie++;
                }
                break;
            }
            case 'B': {
                if(b == 'C') {
                    aWin++;
                    aHand[0]++;
                } else if(b == 'J') {
                    bHand[2]++;
                } else {
                    tie++;
                }
                break;
            }
            case 'C': {
                if(b == 'J') {
                    aWin++;
                    aHand[1]++;
                } else if(b == 'B') {
                    bHand[0]++;
                } else {
                    tie++;
                }
                break;
            }
        }
    }

    printf("%d %d %d\n", aWin, tie, n - aWin - tie);
    printf("%d %d %d\n", n - aWin - tie, tie, aWin);

    int max = 0;
    char hand[3] = {'B', 'C', 'J'};
    for(int i = 0; i < 3; ++i) {
        if(aHand[i] > max) {
            max = aHand[i];
        }
    }
    for(int i = 0; i < 3; ++i) {
        if(aHand[i] == max) {
            printf("%c ", hand[i]);
            break;
        }
    }
    max = 0;
    for(int i = 0; i < 3; ++i) {
        if(bHand[i] > max) {
            max = bHand[i];
        }
    }
    for(int i = 0; i < 3; ++i) {
        if(bHand[i] == max) {
            printf("%c\n", hand[i]);
            break;
        }
    }
    return 0;
}
