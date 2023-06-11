#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a line: ";
    
    getline(cin, str);

    int n = str.size();
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==' ')
        {
            for(int j = i; j<n; j++)
            {
                str[j] = str[j+1];
            }
        }
    }
    cout<<str;
}