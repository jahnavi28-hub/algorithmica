#include <iostream>

using namespace std;

int main() {
    int i;
    cin>>i;
    if(i%400==0){
        cout<<"Leap year";
    }
   else {
   	  if(i%100==0){
            cout<<"It is not leap year";
        }
    else if(i%4==0){
                cout<<"leap year";
            }
     else cout<<"not leap years";
   }
            return 0;
            }
