#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int k, n;
	cin >> n >> k;
	int qt = 0;
	int vet[51];
	for(int i = 0; i < n; ++i){
		cin >> vet[i];
	}
	for(int i = 0; i < n; i++){
		if(vet[i] >= vet[k - 1] && vet[i] > 0)
			qt++;
	}
	cout << qt << endl;
	return 0;
}