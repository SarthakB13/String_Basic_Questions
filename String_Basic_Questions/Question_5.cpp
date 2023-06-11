#include <iostream>
using namespace std;
int main()
{
string str, nstr;
cout<<"Enter a line:";

getline(cin, str);

int n = str.size();
for(int i=n-1; i>=0; i--)
    cout<<str[i];
}