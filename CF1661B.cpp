//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert
#define                ll long long 

void solve(){
	ll int mod = 32768;
	ll int n;
	cin >> n ;
	int ans;
	n = n % mod; 
	for (int i = 0; i < 16; i++){
		ll int x = n + i;
		int times = 0;
		if(x % mod == 0) ans = i;
		else{
		while(x != 0){
			x = x*2;
			x = x % mod;
			times++;
			if(x == 0 && i == 0) ans = times;
			if(x == 0) ans = min(ans,times+i);
		}
	}
	}
	
	cout << ans << " ";
	
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