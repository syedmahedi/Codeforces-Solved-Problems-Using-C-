#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,a[6],i=0,l=1,t=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        while(m>0)
        {
            a[i]=m%10;
            m=m/10;
            if(a[i]!=0)
            {
                t++;
            }
            i++;
        }
        cout<<t<<endl;
        for(int j=0;j<i;j++)
        {
            if(a[j]!=0)
            {
                cout<<a[j]*l<<" ";
            }
            l=l*10;
        }
        cout<<endl;
        i=0;
        l=1;
        t=0;


    }

    return 0;
}
