#include <iostream>

using namespace std;

int main() {
    long long a, b;
    int da, db;
    long long ansA = 0, ansB = 0;
    cin >> a >> da >> b >> db;

    while(a) {
        if(a % 10 == da) {
            ansA *= 10;
            ansA += da;
        }
        a /= 10;
    }

    while(b) {
        if(b % 10 == db){
            ansB *= 10;
            ansB += db;
        }
        b /= 10;
    }

    cout << ansA + ansB << endl;
    return 0;
}