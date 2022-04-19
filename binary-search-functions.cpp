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
	vector <int> v = {10,20,25,30,35,50};
	bool ans = binary_search(v.begin(),v.end(),25);
	if(ans) cout << "yes have\n";
	else cout << "don't have\n";
	int x = lower_bound(v.begin(),v.end(),40) - v.begin();
	cout << v[x] << endl;

	int y = upper_bound(v.begin(),v.end(),40) - v.begin();
	cout << v[y] << endl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
//freopen("output.txt","w",stdout);
#endif 
	int testCase = 1;
//    cin >> testCase;
	while(testCase--)
		solve();
	return 0;
}