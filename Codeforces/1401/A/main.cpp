#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,ans;
    cin >> n >> k;

    if (n<=k) cout << (k-n) << endl;
    else{
        ans= (n-k) %2;
        ans =min (ans ,(n+k)%2);
        cout << ans << endl;
    }




}


int main(){
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	
    int t;
    cin >> t;
    while(t--)
        solve();
 
    return 0;
}