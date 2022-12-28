#include<iostream>
using namespace std;
int main(){
	int f;
	cout<<"degree celsius"<<"\t"<<"degree farenhiet"<<"\n";
	for(int i=0;i<=100;i++){
		if(i%10==0){
			f=1.8*i+32;
			cout<<i<<"\t"<<f<<"\n";
		}
	}
	
}
