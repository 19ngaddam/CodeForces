#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve(){
    int N, m=INT_MAX;
    int arr[100000];
    cin >> N;
    unordered_map<int,int> nonfactors;
    for ( int i=0; i<N; i++){
        cin >> arr[i];
        m= min(arr[i],m);
    }
    int sorted2[100000];
    for(int i=0; i<N; i++){
        if (arr[i]%m!=0) nonfactors.insert(make_pair(i,arr[i])); 
        sorted2[i]=arr[i];
    }
    sort(sorted2,sorted2+N);
    bool in_order = true;
    for(auto x: nonfactors){
        if(sorted2[x.first]!=x.second) {
            in_order =false;
            break;   
        }
    }
    string s = in_order ? "YES" : "NO";
    cout << s << endl;

}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	
    int t;
    cin >> t;
    while(t--)
        solve();
 
    return 0;
}