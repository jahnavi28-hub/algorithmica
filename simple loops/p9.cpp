#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int n,r,sum=0,i=0;
	cin>>n;
	while(n>0){
		r=n%10;
		sum=sum+r*pow(2,i);
		i++;
		n=n/10;
	}cout<<sum;
}
