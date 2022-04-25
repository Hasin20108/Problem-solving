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
	int neg_one = 0;
	int pos_one = 0; 
	for(int i = 0; i < n; i++) {
		cin >> ar[i];
		if(ar[i] == 1) pos_one++;
		else neg_one++;
	}
	if(n == 3){
		if(neg_one == 1 || pos_one == 1) {
			yes; 
			return;
		}
		else {
			no;
			return;
		}
	}
	else{
		if(abs(neg_one - pos_one) <= 2){
			yes;
			return;
		}
		no;

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