#include<bits/stdc++.h>


using namespace std;

void solve(){
	int n; cin >> n;
	assert(n>=4);

	cout<<n-3<<" "<<1<<" "<<1<<" "<<1<<endl;
	assert(gcd(n-3,1) == lcm(1,1));
	assert(n-3+1+1+1 == n);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
}