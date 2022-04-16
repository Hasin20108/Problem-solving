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
	int ar[] ={1,2,3,4,7,10,9,8} ;
	int x = 7;
	//cin >> x;
	sort(ar, ar+8);
	int start , end ,mid;
	start = 0;
	end = 7;
	while(start < end){
		mid = (start+end)/2;
		if(x >= ar[mid]){
			start = mid + 1;
		}
		// else if(x == ar[mid]){
		// 	start = mid;
		// }
		else{
			end = mid;
		}
		// cout << "start = " << start << "\nend = " << end << endl;
	}
	cout << ar[end] << endl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
//freopen("output.txt","w",stdout);
#endif 
	int testCase = 1;
//    cin >> testCase;
	while(testCase--)
		solve();
	return 0;
}