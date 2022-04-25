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
	int n;
	cin >> n;
	int ar[200000]; 
	for(int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	if(n > 2){
		for(int i = 0; i < n - 2; i++){
			if((ar[i] - ar[i + 2]) > 0) {
				no;
				return;
			}
		}
	}
	int x = 0;
	for(int i = 0; i < n -1; i++){
		if(ar[i] > ar[i+1]){
			x++;
			if(x > 1){
				no;
				return;
			}
		}
	}
	yes;
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