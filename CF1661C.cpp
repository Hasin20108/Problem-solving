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
	vector<int> a(n);
	forn(i, n) cin >> a[i];
	long long ans = 1e18;
	int mx = *max_element(a.begin(), a.end());
	for (int x : {mx, mx + 1}){
		long long cnt1 = 0, cnt2 = 0;
	//	cout << "now x = " << x << endl;
		forn(i, n){
			cnt2 += (x - a[i]) / 2;
			cnt1 += (x - a[i]) % 2;
		}
		// diff diye cnt1 ar cnt2 er value ke adjust kora hoiche jate 
		// maximum day komay ana jay 
		long long dif = max(0ll, cnt2 - cnt1 - 1) / 3;
		cnt1 += dif * 2;
		cnt2 -= dif;
		ans = min(ans, max(cnt1 * 2 - 1, cnt2 * 2));
		if (cnt2 > 0){
			cnt1 += 2;
			--cnt2;
			ans = min(ans, max(cnt1 * 2 - 1, cnt2 * 2));
		}
	}
	cout << ans << endl;
	//cout << "one test finished\n";
	
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