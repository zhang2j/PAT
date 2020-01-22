#include <iostream>
#include <cstdio>

using namespace std;

struct node {
    int data = 0;
    bool valid = false;
} a[5];

int main() {
    int n;
    cin >> n;
    int syn = 1;
    int count = 0;

    while(n--) {
        int tem;
        cin >> tem;
        switch(tem % 5) {
            case 0: {
                if(tem % 2 == 0) {
                    a[0].valid = true;
                    a[0].data += tem;
                }
                break;
            }
            case 1: {
                a[1].valid = true;
                a[1].data += (syn*tem);
                syn *= -1;
                break;
            }
            case 2: {
                a[2].valid = true;
                a[2].data++;
                break;
            }
            case 3: {
                a[3].valid = true;
                a[3].data += tem;
                count++;
                break;
            }
            case 4: {
                if(tem > a[4].data) {
                    a[4].valid = true;
                    a[4].data = tem;
                }
                break;
            }
        }
    }

    for(int i = 0; i < 5; ++i) {
        if(i == 3) {
            if(a[3].valid) {
                printf("%.1f", (double)a[3].data/count);
            } else {
                printf("N");
            }
        } else {
            if(a[i].valid) {
                printf("%d", a[i].data);
            } else {
                printf("N");
            }
        }
        if(i != 4) {
            printf(" ");
        }
    }
    return 0;
}
