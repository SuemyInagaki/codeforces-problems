#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	int max = -1;
	int qt = 0;
	int entra[1000];
	int sai[1000];
	for(int i =1; i <= n; i++){
		cin >> sai[i-1] >> entra[i-1];
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			qt+= entra[0];
		}
		else{
			qt-= sai[i];
			qt+= entra[i];
		}
		if(max < qt){
			max = qt;
		}
	}
	cout << max << endl;
	return 0;
}