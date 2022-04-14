//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long 
#define                forn(i, n) for(int i = 0; i < int(n); i++) 


void solve(){
	ll x,y,k;
	cin >> x >> y >> k;
	ll needx = (y*k + k);
	ll ans;
	if(needx > x){
		ll z = needx - x;
		if(z % (x-1) == 0) ans = z/(x-1);
		else ans = z/(x-1) + 1;
		cout << ans + 1ll + k << endl;
	}else cout <<1 + k<< "\n";

	// int idea = needx/x;
	// // if(needx % x == 0) idea = needx/x + 1;
	// // else idea 
	// // needx -= idea;
	// // if(needx )
	// int pabo = needx - idea;

	// cout << idea + k << endl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
//freopen("output.txt","w",stdout);
#endif 
	int testCase = 1;
	cin >> testCase;
	while(testCase--)
		solve();
	return 0;
}