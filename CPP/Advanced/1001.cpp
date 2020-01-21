#include <iostream>
#include <stack>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    stack<char> s;
    int ans = a + b;
    char sym = ans < 0 ? '-' : '+';
    if(ans < 0){
        ans = -ans;
    }
    int sum = 0;
    while(ans){
        if(sum != 0 && sum % 3 == 0){
            s.push(',');
        }
        sum++;
        s.push(ans % 10 + '0');
        ans /= 10;
    }
    if(sym == '-'){
        s.push(sym);
    }
    if(s.empty()){
        s.push('0');
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}