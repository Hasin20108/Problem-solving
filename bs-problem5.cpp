//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long
int findLastOccurance(int ar[], int n, int x){
	int high = n - 1;
	int low = 0;
	int result = -1;
	while(low <= high){
		int mid = (high + low) / 2;
		if (x == ar[mid]){
			result = mid;
			low = mid + 1;
		}
		else if(x > ar[mid]){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return result;
}
int findFirstOccurance(int ar[], int n, int x){
	int high = n - 1;
	int low = 0;

	while(low < high){
		int mid = (low + high)/2;
		if(x <= ar[mid]){
			high = mid;
		}else{
			low = mid + 1;
		}
	} 
	return high;
}
int occuranceOfNumber(int ar[],int x, int n){
	int first = findFirstOccurance(ar,x,n);
	int last = findLastOccurance(ar,x,n);
	
	return last-first+1;
}
void solve(){
	int ar[] = {1,2,2,2,5,5,9,9,9,9};
	int sz = sizeof(ar)/sizeof(ar[0]);
	int ind = occuranceOfNumber(ar,sz,2);
	cout << "occurance of 2 = " << ind << endl;

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