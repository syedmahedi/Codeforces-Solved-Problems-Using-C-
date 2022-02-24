#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m%7==0)
        {
            cout<<m<<endl;
        }
        else
        {
            int k=m%7;
            int k2=m%10;
            int k1=7-k;
            if(k2+k1<10)
            {
                cout<<m+k1<<endl;
            }
            else
                cout<<m-k<<endl;
        }
    }


    return 0;
}
