#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int x = 0;
	int n;
	cin >> n;
	char s[4];
	while(n--){
		cin >> s;
		if(s[1] == '+'){
			x++;
		}
		else
			x--;

	}
	cout << x << endl;
	return 0;
}