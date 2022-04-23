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
	string s;
	cin >> s;
	int len = s.length();
	if(len == 1){
		no;
		return;
	}
	else if(len == 2){
		if(s[0] == s[1]){
			yes;
			return;
		}else {
			no;
			return;
		}
	}
	else{
		if(s[0] != s[1]) {
			no;
			return;
		}else if(s[len-1] != s[len-2]){
			no;
			return;
		}
		for(int i = 1; i < len -1; i++){
			if(s[i] != s[i+1] && s[i] != s[i-1]){
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