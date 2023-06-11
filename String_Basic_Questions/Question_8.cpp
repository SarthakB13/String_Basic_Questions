#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i; 
    cout<<"Enter a num: ";
    cin>>i;

    string num = to_string(i);
    string str;

    cout<<"Enter a string:";
    cin>>str;
    int temp=0;
    for (int i = 0; i < str.length(); i++)
        temp=temp*10+(str[i] - '0'); 
        
    cout << "string to number: "<<num<<endl;
    cout << "Number to string: "<<temp;
}