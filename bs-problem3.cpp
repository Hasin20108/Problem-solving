//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long
int findFirstOccurance(int ar[], int n, int x){
	int high = n - 1;
	int low = 0;
	while(low < high){
		int mid = (high + low) / 2;
		if(x <= ar[mid]){
			high = mid;
		}
		else{
			low = mid + 1;
		}
	}
	return high;
}
void solve(){
	int ar[] = {2,5,6,8,10,10};
	int sz = sizeof(ar)/sizeof(ar[0]);
	int ind = findFirstOccurance(ar,sz,10);
	cout << "first occurance of 10 = " << ind << endl;

}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
//freopen("output.txt","w",stdout);
#endif 
	int testCase = 1;
//cin >> testCase;
	while(testCase--)
		solve();
	return 0;
}