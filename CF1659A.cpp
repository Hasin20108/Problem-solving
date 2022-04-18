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
	int n , r, b;
	cin >> n >> r  >> b;
	int persegment = r / (b + 1);
	int rest = r % (b + 1);
	for(int i = 0; i < b + 1; i++){
		for(int i = 0; i < persegment; i++){
			cout << "R";
		}
		if(rest){
			cout << "R";
			rest--;
		}
		if(i < b) cout << "B";

	}
	cout << '\n';
	// r % (b + 1) == 0? x = r / (b + 1) : x = (r / (b + 1));
	// // cout << x;
	// x += (r % (b + 1)) / x;
	// for(int i = 1; i <= n; i++){
	// 	if(i % x == 0 && b > 0){
	// 		cout << "B";
	// 		b--;
	// 	}
	// 	else cout << "R";
	// }
	// cout << '\n';
	// int n, r, b; 
	// cin >> n >> r >> b;
 
 //    vector<int> cnt(b+1, r/(b+1));
 //    for(int i = 0; i < r%(b+1); i++) cnt[i]++;
 
 //    string s;
 //    for(int i = 0; i < b+1; i++) {
 //        s += string(cnt[i], 'R');
 //        if (i != b) s += 'B';
 //    }
 //    cout << s << '\n';
 
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