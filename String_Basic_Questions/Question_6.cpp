#include<iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout<<"Enter a line: ";
    getline(cin, str1);
    cout<<"Enter a line: ";
    getline(cin, str2);

    int n = str1.size(); 
    int m = str2.size();
    int count=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
                break;
            }
            else
                continue;
        }
    }
    if(count==m){
    cout<<"strings are anagram";
    }
    else{
    cout<<"strings are not anagram";
    }
}