//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long
void solve(){
	string s;
	int n;
	cin >> n >> s;
	int l = 0;
	int count = 0;
	while(l < n - 1){
		if(s[l] == '('){
			l += 2;
		}
		else{
			int r = l + 1;
			while(r < n && s[r] != ')'){
				r++;
			}
			if(r == n){
				break;
			}
			l = r + 1;
		}
		count++;
	}

	cout << count << " " << n - l << endl;
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