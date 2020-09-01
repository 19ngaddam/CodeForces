#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1,y1,z1;
    int x2,y2,z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2; 

    int pos, neg, count;
    count = min(z1,y2);
    pos = 2* (count);
    z1 -= count;
    y2 -= count;

    count = z2 -(x1+z1);

    if(count>0){
        neg =2* min(y1, count);
    }
    else{
        neg=0;
    }
    cout<<(pos-neg) << endl;



}


int main(){
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	
    int t;
    cin >> t;
    while(t--)
        solve();
 
    return 0;
}