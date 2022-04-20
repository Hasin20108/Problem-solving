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

    ll int p[200001];
    p[0] = 0;
    for(int i = 1; i <= n; i++){
    	p[i] = p[i -1] + ar[i];
    }
    ll int ans = 1e18;
    for(int i = 0; i <= n; i++){
    	ll int preans = (a+b)*ar[i] + b*(p[n]-p[i] - (n - i)*ar[i]);
    	ans = min(ans,preans);
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