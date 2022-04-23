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
	int ar[200000];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}	
	if(n == 1){
		yes; 
		return;
	}
	else if(n == 2){
		if(ar[1] - ar[0] <= 3){
			yes;
			return;
		}
		else{
			no;
			return;
		}
	}else {
		int dif2=0;
		int dif3 = 0; 
		for(int i = 1; i < n; i++){
			if(ar[i] - ar[i-1] == 2) dif2++;
			if(ar[i] - ar[i-1] == 3) dif3++;
			if(ar[i] - ar[i-1] > 3){
				no;
				return;
			}
		}
		if(dif2 > 2){
			no;
			return;
		}else if(dif3 > 1){
			no;
			return;
		}else if(dif2 >= 1 and dif3 == 1){
			no;
			return;
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