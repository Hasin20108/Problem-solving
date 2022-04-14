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

bool cheak(ll int a){
	ll int ref = a;
	while(a > 0){
		ll int rem = a % 10;

		if(rem != 0 && ref % rem != 0) return false;
		a = a/10;
	}
	return true;
}

void solve(){
	ll int n;
	cin >> n;
	for(ll int i = n;; i++){
		if(cheak(i)){
			cout << i << "\n";
			break;
		}
	}
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