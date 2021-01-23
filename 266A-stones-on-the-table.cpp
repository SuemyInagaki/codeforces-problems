#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int tam = s.size();
	for(int i = 1; i < s.size(); i++){
		if (s[i] == s[i - 1]){
			tam--;
		}
	}
	cout << s.size()-tam << endl;
	return 0;
}