#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    string s;
    getline(cin,s);


    set<char>s1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        s1.insert(s[i]);
    }

    cout<<s1.size()<<endl;





    return 0;
}
