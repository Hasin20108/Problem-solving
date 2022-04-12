//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long 
void swap(int x,int y){
	int tem;
	tem = x;
	x = y;
	y = tem;
}

void solve(){
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	
	for(int i = 0; i < n-1; i++){
		int same = abs(a[i] - a[i+1]) + abs(b[i] - b[i + 1]);
		int cross = abs(a[i] - b[i+1]) + abs(a[i+1] - b[i]);
		if(same > cross){
			int tem = a[i+1];
			a[i+1] = b[i+1];
			b[i+1] = tem;
		}
	}
	int sum = 0;
	for(int i = 0; i < n - 1; i++){
		sum += abs(a[i] - a[i + 1]);
		sum += abs(b[i] - b[i + 1]); 
	}
	cout << sum << endl;

	
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