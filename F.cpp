#include<bits/stdc++.h>
using namespace std;
int main(){
	int x_1=0,y_1=0,x_2=0,y_2=0,x=0,y=0;
	cin>>x_1>>y_1>>x_2>>y_2>>x>>y;
	if (x_1<=x && x_2>=x && y_1>=y && y>=y_2) cout<<"yes";
	else cout<<"no";
}