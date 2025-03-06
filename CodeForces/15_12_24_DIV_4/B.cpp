#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

#define ll long long 


using namespace std;



void solve() {
    string n;
    cin >> n;    

    string out = "";

    for(int i=n.length()-1; i>= 0; i--){
        if(n[i]=='p'){
            out.push_back('q');
            continue;
        }

        if(n[i]=='q'){
            out.push_back('p');
            continue;
        }

        out.push_back('w');
    }

    cout << out << endl;
    
}

int main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
