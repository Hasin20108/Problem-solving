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
	int n,k;
	string s;
	cin >> n >> k;
	cin >> s;
	int temk = k;
	vector<int>ans(n,0);
	if(k % 2 == 0){
		for(int i = 0; i < n && temk > 0; i++){
			if(s[i] == '0'){
				ans[i] = 1;
				temk--;
			}
		}
	}
	else{
		for(int i = 0; i < n && temk > 0; i++){
			if(s[i] == '1'){
				ans[i] = 1;
				temk--;
			}
		}
	}
	ans[n-1] += temk;
	for(int i = 0; i < n; i++){
		if((k-ans[i]) % 2 == 1){
			s[i] = '1' - (s[i] - '0');
		}
	}
	cout << s << endl;
	for(int x : ans){
		cout << x << " ";
	}
	cout << endl;



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