#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
	int n;
	cin >> n;
	int qt = 0;
	int a, b, c;
	for(int i = 0; i < n; ++i){
		cin >> a >> b >> c;
		if((a + b + c) >= 2)
			qt++;
	}
	cout << qt;
	return 0;
}
