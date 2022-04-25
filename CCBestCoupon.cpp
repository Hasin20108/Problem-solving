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
#define                yes cout << "YES\n";
#define                no cout << "NO\n";
void solve(){
	float x;
	cin >> x ;
	if(x*(0.1) > 100) cout << x*(0.1)<< endl;
	else cout << 100 << endl;
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