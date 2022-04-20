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
	ll int n, a,b;
	ll int ar[200001];
	cin >> n >> a >> b;
	for(ll int i = 1; i <= n; i++){
		cin >> ar[i];
	}
	ar[0] = 0ll;
	ll int ans = 1e18;
	ll int fixvalue = 0ll;

	for(ll int i = 1; i <= n; i++){
		ll int preans = fixvalue;
		for(ll int j = i; j <= n; j++){
			preans += b*(ar[j] - ar[i - 1]);
			if(preans > ans) break;
		}
		ans = min(ans,preans);
		fixvalue =fixvalue + b*(ar[i] - ar[i - 1]);
		fixvalue =fixvalue + a*(ar[i] - ar[i - 1]);
	}
	cout << ans << endl;


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