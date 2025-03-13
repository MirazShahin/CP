#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test_case = 1; //cin >> test_case;
    while(test_case-- ) {
        ll n, k; cin >> n >> k;
        ll x = (n + 1) / 2;
        if(k <= x) {
            ll kk = k * k;
            ll badh = (k - 1) * (k - 1);
            ll ans = kk - badh;
            cout << ans << '\n';
        }
        else {
            k -= x;
            ll kk = (k * (k + 1));
            ll badh = (k - 1) * (k - 1 + 1);
            ll ans = kk - badh;
            cout << ans << '\n';
        }  
    } 
    return 0;
}
