#include <bits/stdc++.h>


using namespace std;

int main(){
	int n, i;
	vector<string> vet;
	cin >> n;
	for(i = 0; i < n; i++){
		string s;
		cin >> s;
		if(s.size()<= 10){
			vet.insert(vet.end(), s);
		}
		else{
			int tam = s.size();
			tam = tam -2;
			if(tam < 10){
				char nova_s[4];
				nova_s[0] = s[0];
				nova_s[2] = s[s.size() - 1];
				nova_s[3] = '\0';
				nova_s[1] = 48 + tam;
				vet.insert(vet.end(), nova_s);
			}
			else{
			char nova_s[5];
			nova_s[0] = s[0];
			nova_s[3] = s[s.size() - 1];
			int d = tam/10; //decimal
			int u = tam%10; //numeral
			nova_s[1] = 48 + d;
			nova_s[2] = 48 + u;
			nova_s[4] = '\0';
			vet.insert(vet.end(), nova_s);
			}
			
	}
}
	for(i = 0; i < n; i++){
		cout << vet[i] << endl;
	}


	return 0;
}