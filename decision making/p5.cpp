#include<iostream>
#include<string>
using namespace std;
int main(){
    string ch;
    cin>>ch;
    if(ch.length()==6)
    {
        if(isupper(ch[0])&&isupper(ch[1])&&isupper(ch[2])&&isdigit(ch[3])||isdigit(ch[4])||isdigit(ch[5]))
        cout<<"old license plate";
}
else if(ch.length()==7)
if(isdigit(ch[0])&&isdigit(ch[1])&&isdigit(ch[1])&&isdigit(ch[2])&&isdigit(ch[3])||isupper(ch[5])&&isupper(ch[6]))
{
    cout<<"new lisence plate";
}
    else
    {
        cout<<"not valid for either style of license plate";
    }
return 0;
}

