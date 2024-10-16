#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	if(N==1) cout<<0;
	else if(N%2==0) cout<<N/2;
	else cout<<N;
}
// #include <bits/stdc++.h> это все библиотеки сразу, если у вас мак то это не работает, можете просто #include <iostream> использовать и <cmath>, <vector> и такие
