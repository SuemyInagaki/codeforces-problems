#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	//a < b
	int a, b, i = 0;
	cin >> a >> b;
	while(a <= b){
		a = a*3;
		b = b*2;
		i++;
	}
	cout << i << endl;
	return 0;

}