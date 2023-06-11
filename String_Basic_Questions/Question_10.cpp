#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    int n=str.size();
    int count=0;
    for (int i=0; i<n; i++)
    {
        if(str[i]==str[n-i-1])
        {
            count++;
        }
    }
    if(count==n)
        cout<<"True";
    else
        cout<<"false";
}