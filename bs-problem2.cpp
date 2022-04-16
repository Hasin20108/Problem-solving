//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long
int searchCircularArray(int ar[], int n, int x){
	int high = n - 1;
	int low = 0;
	while(low <= high){
		int mid = (high + low) / 2;
		if(ar[mid] == x){
			return mid;
		}
		if(ar[mid] <= ar[high]){
			if(x > ar[mid] and x <= ar[high]){
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
		else{
			if(x >= ar[low] and x < ar[mid]){
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}

		}
	}
	return -1;
}
void solve(){
	int ar[] = {2,5,6,8,9,10};
	int sz = sizeof(ar)/sizeof(ar[0]);
	int ind = searchCircularArray(ar,sz,10);
	cout << "index of 10 = " << ind << endl;

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