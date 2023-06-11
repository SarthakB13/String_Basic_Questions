#include <iostream>
using namespace std;

int main()
{
    string str, tstr;
    cout<<"Enter a line: ";
    
    getline(cin, str);

    int n = str.size();
    char temp;
    bool flag=false;
    for (int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(str[i]==str[j] && str[i]!='0' && str[i]!=' ')
            {
                temp = str[i];
                str[j]='0';
                flag=true;
            }
        }
        if(flag)
        {
            cout << temp;
            flag=false;
        }
    }
}