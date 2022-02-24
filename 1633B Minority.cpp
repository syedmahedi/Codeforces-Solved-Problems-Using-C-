#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int k0=count(s.begin(),s.end(),'0');
        int k1=count(s.begin(),s.end(),'1');
        if(k0==k1)
        {
            cout<<k0-1<<endl;
        }
        else
        {
           if(k1>k0)
        {
            cout<<count(s.begin(),s.end(),'0')<<endl;
        }
        else
            cout<<count(s.begin(),s.end(),'1')<<endl;
        }

    }




    return 0;
}
