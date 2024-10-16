#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,S=0;
	cin>>N;
	while(N>0){
		S++;
		if(S%7==0) continue;
		else if(S%2==0) N-=4;
		else N+=3;
	}
	cout<<S;
}
// странная задача у который аутпут неправильный 