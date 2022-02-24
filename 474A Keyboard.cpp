#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


//  char ar[]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char c;
    string s;
    cin>>c>>s;
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    if(c=='R')
    {
        for(int i=0;i<s.size();i++)
        {
             for(int j=0;j<10;j++)
             {
                 if(s[i]==s1[j])
                 {
                     s[i]=s1[j-1];
                 }
                 else if(s[i]==s2[j])
                 {
                     s[i]=s2[j-1];
                 }
                 else if(s[i]==s3[j])
                    s[i]=s3[j-1];
             }
        }
    }
    else if(c=='L')
    {
        for(int i=0;i<s.size();i++)
        {
             for(int j=0;j<10;j++)
             {
                 if(s[i]==s1[j])
                     s[i]=s1[j+1];
                 else if(s[i]==s2[j])
                    s[i]=s2[j+1];
                 else if(s[i]==s3[j])
                    s[i]=s3[j+1];
             }
        }
    }

    cout<<s<<endl;
    return 0;
}
