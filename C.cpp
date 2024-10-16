#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=0,y=0,a=0,b=0;
    cin>>x>>y>>a>>b;
    if(x>=a && y>=b || x>=a && x+y>=a+b) cout<<"Yes";
    else cout<<"No";
}