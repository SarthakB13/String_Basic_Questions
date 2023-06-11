#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string str; cout<<"Enter a string:";
    getline(cin, str);
    
    int n = str.size();

    for (int i = 0; i<n; i++)
    {
        if(str[i] != ' ')
            st.push(str[i]);
        else
        {
            while (st.empty() == false) 
            { 
                cout<<st.top(); 
                st.pop();
            }           
            cout<<" ";
        }
    }
    while (st.empty() == false) 
    { 
        cout << st.top();
        st.pop();
    }
}