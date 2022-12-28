#include <iostream>

using namespace std;

int main() {
	char ch;
	ch='a','e','i','o','u','y';
	cin>>ch;
	if(ch=='a'||'e'||'i'||'o'||'u'){
		cout<<"vowel";
	}
	else if(ch=='y'){
		cout<<"sometimes vowel or consonent";
	}
	else{
		cout<<"consonent";
	}
	return 0;
}
	
