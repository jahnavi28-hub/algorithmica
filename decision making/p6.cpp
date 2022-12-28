#include <iostream>

using namespace std;

int main() {
    int i;
    char ch;
    cin>>ch>>i;
    if((i%2==0 && (ch='a'||'c'||'e'||'g'))||(i%2!=1 && (ch=='b'||'d'||'f'||'h'))){
        cout<<"square is white";
    }
        else{
		
        cout<<"square is black";
    }
        return 0;
    }
