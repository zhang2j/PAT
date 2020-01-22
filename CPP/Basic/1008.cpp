#include <iostream>

using namespace std;

void swap(int *a, int i, int j) {
    int tem = a[i];
    a[i] = a[j];
    a[j] = tem;
}

void reverse(int *a, int head, int tail) { //function std::reverse may work better, we need not to rebuild a whell
    if(head > tail) {
        return;
    }

    for(int i = 0; i <= (tail-head)/2; ++i) {
        swap(a, head + i, tail - i);
    }
}

int main() {
    int n, step;
    cin >> n >> step;
    step %= n;

    int a[101];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    reverse(a, 0, n - 1 - step);
    reverse(a, n - step, n - 1);
    reverse(a, 0, n - 1);

    for(int i = 0; i < n; ++i) {
        cout << a[i];
        if(i != n-1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
