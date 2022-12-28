#include <iostream>
#include<bits/stdc++.h>
using namespace std;
float getHypotenus(int x,int y){
	int t;
	float z;
	t=(x*x)+(y*y);
	z=sqrt(t);
	return z;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<getHypotenus(a,b);
	return 0;
}
