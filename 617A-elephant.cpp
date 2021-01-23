#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll x;
	cin >> x;
	ll soma = 0;
	
	if(x <= 5){
		soma++;
	}
	else{
		soma = soma + x/5;
		if(x%5 != 0)
			soma++;
	}
	cout << soma << endl;

	return 0;

}