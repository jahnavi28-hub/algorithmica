#include<iostream>
using namespace std;
int main()
{
	int i;
	cin>>i;
	if(i>=380&&i<450)
	{
		cout<<"violet";
	}
	else if(i>=450&&i<495)
	{
		cout<<"blue";
	}
	else if(i>=495&&i<570)
	{
		cout<<"green";
	}
	else if(i>=570&&i<590)
	{
		cout<<"yellow";
	}
	else if(i>=590&&i<620)
	{
		cout<<"orange";
	}
	else if(i>=620&&i<750)
	{
		cout<<"red";
	}
	else
	{
	    cout<<"not valid spectrum";
	}
}
