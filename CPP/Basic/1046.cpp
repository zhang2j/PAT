#include <iostream>

using namespace std;

int main() {
    int aDrink = 0, bDrink = 0;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int aSay, bSay, aHand, bHand;
        cin >> aSay >> aHand >> bSay >> bHand;
        if(aHand == bHand) {
            continue;
        } else if(aSay + bSay == aHand) {
            bDrink++;
        }
        else if(aSay + bSay == bHand) {
            aDrink++;
        }
    }

    cout << aDrink << " " << bDrink << endl;
    return 0;
}
