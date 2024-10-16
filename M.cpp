#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,d,sum=0;
	cin>>n>>a>>d;
	while(n--){
		sum+=a;
		cout<<a<<" ";
		a+=d;
	}
	cout<<endl;
	cout<<"sum: "<<sum;
}