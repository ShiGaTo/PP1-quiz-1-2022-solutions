#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int sum=0,p=1;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-'0';
		p*=s[i]-'0';
	}
	cout<<sum+p;
}
