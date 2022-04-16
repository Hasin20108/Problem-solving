//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long
int RotationCount(int ar[], int n){
	int low = 0;
	int high = n -1;
	while(low <= high){
		if(ar[low] < ar[high]){
			return low;
		}
		int mid = (high+low)/2;
		int next = (mid + 1) % n;
		int prev = (mid - 1 + n) % n;

		if(ar[mid] < ar[prev] && ar[mid] < ar[next]){
			return mid;
		}
		else if(ar[mid] >= low){
			low = mid + 1;
		}
		else if(ar[mid] <= ar[low]){
			high = mid - 1;
		}
	}
	return -1;
}
void solve(){
	int ar[] = {8,9,10,2,5,6};
	int sz = sizeof(ar)/sizeof(ar[0]);
	int minNumInd = RotationCount(ar,sz);
	cout << "minimum number index = " << minNumInd << endl;

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