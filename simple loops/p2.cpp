#include<iostream>
#include<string>
using namespace std;
int main(){
	int i,vowcount=0,conscount=0;
	string s;
	cin>>s;
	for(i=0;i<=s.length();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			vowcount++;
	}
		else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		conscount++;
	}
	cout<<vowcount<<"\n"<<conscount;
	
}
