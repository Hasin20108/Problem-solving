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
	int n;
	cin >> n;
	int ar[200001];
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}	
	int frq[200001] = {0};
	for(int i = 0; i < n; i++){
		frq[ar[i]]++;
		if(frq[ar[i]] >= 3){
			cout << ar[i] << endl;
			return;
		}
	}
	cout << "-1\n";
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