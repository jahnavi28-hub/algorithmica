#include<iostream>
using namespace std;

int main()
{
	int side1, side2, side3;
	
	cout << "\nPlease Enter Three Sides of a Triangle =  ";
	cin >> side1 >> side2 >> side3;
	
	if( (side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2) )
  	{
  		cout << "\nThis is a Valid Triangle";
  	}
  	else
    	cout << "\nThis is an Invalid Triangle";
		
 	return 0;
}
