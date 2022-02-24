#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    float n,m,a,b,c=0;
    cin>>n>>m>>a>>b;

    float k=b/m;

    if(a>=k)
    {
        for (int i=0;i<n;i++)
        {
            if(m>=n)
            {
                break;
            }
            c=c+b;
            m+=m;
        }
    }
    else
    {
        for (int i=0;i<n;i++)
        {
            c=c+a;
        }
    }
    if(m==n)
    {
        cout<<c<<endl;
    }
    else
        cout<<c+a<<endl;


    return 0;
}
