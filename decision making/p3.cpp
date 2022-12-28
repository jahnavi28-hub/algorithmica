#include <iostream>

using namespace std;

int main() {
   int a,b,c;
   cin>>a>>b>>c;
   if(a==b&&b==c&&b==c){
       cout<<" " "equilateral triangle";
       }
       else if(a==b || a==c){
           cout<<" " "isosceles triangle";
       }
       else{
           cout<<" " "scalene triangle";
       }
   return 0;
}
