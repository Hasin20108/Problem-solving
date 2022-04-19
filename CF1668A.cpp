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
	int n, m;
	cin >> n >> m;
	int x ;
	(n >= m) ? x = n : x = m;
	int move = (x - 1)*2;
	if (((x-m)%2 == 1) ||((x - n) % 2 == 1)){
		move--;
	}
	if((n == 1 && m-n > 1) || (m == 1 && n - m > 1)) move = -1;
	cout << move << endl;
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