#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

#define ll long long 


using namespace std;



void solve() {
    ll n;
    cin >> n;    

    int count = 0;

    for(ll i = 0; i<n; i++){
        for(ll j=1; j <n; j++){
            if(i == (n-j)) count++;
        }
    }
    cout << count << endl;
    
}

int main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
