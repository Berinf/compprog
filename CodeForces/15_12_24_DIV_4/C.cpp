#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

#define ll long long 


using namespace std;



void solve() {
    ll m, a, b, c;
    cin >> m >> a >> b >> c;    

    ll out = 0;

    ll row1 = m;
    ll row2 = m;

    if(a > m){
        out += m;
        row1 = 0;
    }else{
        out += a;
        row1 = m - a;
    }

    if(b > m){
        out += m;
        row2 = 0;
    } else {
        out += b;
        row2 = m - b;
    }

    m = (row2+row1);

    if(m > 0){
        if(m < c){
            out += m;
        } else {
            out += c;
    }
    }

    cout << out << endl;
    
}

int main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
