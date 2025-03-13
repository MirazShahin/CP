#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string binary(int n) {
    string s;
    while(n > 0) {
        s += (n % 2) + '0';
        n /= 2;
    }
    // reverse(s.begin(), s.end());
    return s;
} 
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test_case = 1; cin >> test_case;
    while(test_case-- ) {
        int n, k; cin >> n >> k;
        if(n == 1) {
            cout << k << '\n';
            continue;
        }
        if(k % 2 == 0) {
            cout << k << ' ';
            for(int i = 0; i < n - 1; i++ ) cout << 0 << ' ';
            cout << '\n';
            continue;
        }
        vector<int> ans; 
       for(int i = 0; i < n; i++ ) {
            if((k | i) == k) {
                ans.push_back(i);
            }
            else {
                ans.push_back(k);
            }
        } 
        ll orr = 0;
        for(auto &it : ans ) {
            orr |= it;
        }
        if(orr == k) {
            for(auto &it : ans) cout << it << ' ';
            cout << '\n';
        }
        else {
            ans[n - 1] = k;
            for(auto &it : ans) cout << it << ' ';
            cout << '\n';
        }
        
    } 
    return 0;
}
