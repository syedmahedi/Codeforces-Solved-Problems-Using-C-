#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int count=0,n=0;
    for (int i=0;i<s.size();i++)
    {
        if(isupper(s[i])){
            count++;
        }

    }
    for (int i=0;i<s.size()-1;i++)
    {
        if(isupper(s[i+1]))
        {
            n++;
        }
    }
    if(count==s.size())
    {
        for (int i=0;i<s.size();i++)
        {
            cout<<char(s[i]+32);
        }
        cout<<endl;
    }

    else if(n==s.size()-1)
    {
        cout<<char(s[0]-32);
        for (int i=1;i<s.size();i++)
        {
            cout<<char(s[i]+32);
        }
        cout<<"\n";
    }
    else
        cout<<s<<endl;

    return 0;
}
