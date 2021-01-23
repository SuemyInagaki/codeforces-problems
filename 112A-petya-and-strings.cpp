#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int tam = s1.size();
	int f = 0;
	for(int i = 0; i < tam; i++){
		if(toupper(s1[i]) != toupper(s2[i])){
			if(toupper(s1[i]) < toupper(s2[i])){
				f = -1;
			}
			else{
				f = 1;
			}
			break;
		}
	}
	cout << f << endl;
	return 0;
}