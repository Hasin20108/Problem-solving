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