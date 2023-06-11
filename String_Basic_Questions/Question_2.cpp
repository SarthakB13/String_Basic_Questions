#include <iostream>

using namespace std;
int main()
{
    string str;
    cout<<"enter a string: ";
    cin>>str;

    int n = str.size();
    int freq[n];
    int count = 0;
    int pos = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[i]==str[j])
                count++;
        } 
    freq[i]=count;
    count=0;
    }

    for(int i = 0; i<n; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(str[i]== str[j])
            break;
        }
    
    if(j==i)
        cout<<str[i] <<":"<< freq[i]<<endl;
    }
}