#include<bits/stdc++.h>
using namespace std;
int main(){
	float x,y,d=1;
	cin>>x>>y;
	while(x<y){
		x+=x*0.1;
		d++;
	}
	cout<<d;
}
