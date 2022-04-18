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
	int ar[] ={0,1,2,3,4,5,5,7} ;
	int x;
	cin >> x;
	// for(int i = 0; i < n; i++){
	// 	cin >> ar[i];
	// }
	sort(ar, ar+8);
	int beg , end ,	mid;
	beg = 0;	
	end = 7;
	//mid = (beg+end)/2;
	int ind;
	bool ok = true;
	while(ok){
		bool have = false;
		while(beg <= end){
			mid = (beg+end)/2;
			if(ar[mid] == x) 
			{
				ind = mid;
				have = true;
				if(ind == 0) ok = false; 
				break;
			}
			else if(x > ar[mid]){
				beg = mid+1;
			}
			else{
				end = mid -1;
			}
		}
		if(!have) ok = false;
		beg = 0;
		end = ind-1;
		//cout <<"in = " <<ind << endl;
	}
	// if(have) cout << "Yes\n";
	// else cout << "No\n";
	// while(true){
	// 	if(x != ar[ind - 1]) {
	// 		cout << ind;
	// 		break;
	// 	}
	// 	ind--;
	// }
	cout << ind << endl;

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