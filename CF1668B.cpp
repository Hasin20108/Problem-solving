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
	ll int ar[100001];
	ll int n,m;
	cin >> n >> m;
	ll int sum = 0;
	for(ll int i = 0; i < n; i++){
		cin >> ar[i];
	}
	sort(ar,ar+n);
	for(int i = 0;i < n; i++){
		if(i == 0) sum += 1;
		else if(i == n-1) sum += (ar[i]*2 + 1);
		else (sum += ar[i] +1);
	}
	if(sum <= m) cout << "yes\n";
	else cout << "no\n";	
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