#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b && a==c) cout<<"NO";
	else if((a==b || a==c || b==c))  cout<<"YES";
	else cout<<"NO";
}
