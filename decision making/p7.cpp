#include <bits/stdc++.h>
using namespace std;
int main(){
	string month;
	int day;
	cout<<"please check that your entering the correct details of month and day :"<<"/n";
	cin>>month>>day;
	if(month=="december"){
		if(day>=21) cout<<"winter";
		else cout<<"fall";
	}
	else if(month=="january"||month=="februray"){
		cout<<"winter";
	}
	else if(month=="march"){
		if(day<20) cout<<"winter";
	}
	else if(month=="march"){
		if(day>=21) cout<<"summer";
	}
}
