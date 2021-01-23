#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int t = s.size();
	sort(s.begin(), s.end());
	int qt = 0;
	for(int i = 0; i < s.size(); i++){
		qt++;
		while(s[i] == s[i+1]){
			i++;
		}
	}
	if(qt%2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
	return 0;
}