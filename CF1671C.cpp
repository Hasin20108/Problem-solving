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
	//order of n solution
	ll int n,x;
	ll int ar[200001];
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	sort(ar, ar+n);
	ll int sum = 0;
	ll int total = 0;
	for(int i = 0; i < n; i++){
		sum = sum + ar[i];
		if(sum <= x){
			total += (x - sum) / (i + 1) + 1;
		}
	}
	cout << total << endl;




	// order of n^2 solution
	
	// int n,x;
	// cin >> n >> x;
	// int ar[200001];
	// for(int i = 0; i < n; i++){
	// 	cin >> ar[i];
	// }
	// sort(ar, ar+n);
	// int totalSugar = 0;
	// int day = (x - ar[0] + 1);
	// if(day < 0) day==0;
	// while(day){
	// 	int temx = x;
	// 	for(int i = 0; i < n; i++){
	// 		if(temx >= ar[i]){
	// 			temx -= ar[i];
	// 			ar[i]++;
	// 			totalSugar++;
	// 		}else break;
	// 	}
	// 	day--;
	// }
	// cout << totalSugar << endl;

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