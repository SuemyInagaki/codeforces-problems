#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main(){
	int k, w;
	ll n;
	cin >> k >> n >> w;
	ll soma = (k + w*k)*w/2;
	if(soma <= n){
		cout << 0 << endl;
	}
	else{
		cout << soma - n << endl;
	}
	return 0;
}