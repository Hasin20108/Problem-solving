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
	string s;
	cin >> s;
	bool same;
	int len;
	char ch;
	for(int i = 0; i < n; i++){
		if(i == 0){
			same = true;
			len = 0;
			ch = s[i];
		}
		if(s[i] == 'W'){
			if(same and len){
				no;
				return;
			}if(n == 1){
				yes;
				return;
			}
			same = true;
			len = 0;
			ch = s[i+1];
		}
		if(s[i] == 'W') continue;
		if(s[i] != ch) same = false;
		len++;
		if(i == n - 1){
			if(same and len){
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