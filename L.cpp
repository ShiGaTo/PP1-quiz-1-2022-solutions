#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=0,s=0;
	cin>>n;
	while(s<500000){
		m++;
		if(m!=1) n+=0.1*n;
		s+=0.3*n;
	}
	cout<<m;
}