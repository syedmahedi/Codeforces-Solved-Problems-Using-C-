#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m=0,l=0,k=0,x=0,y=0,z=0;
    cin>>n;
    int a;
    int b[3],c[3],d[3];

    for(int i=0;i<n;i++)
    {
        cin>>a;

        if(a==1)
        {
            m++;
            b[x]=i+1;
            x++;
        }
        else if(a==2)
        {
            l++;
            c[y]=i+1;
            y++;
        }
        else
        {
            k++;
            d[z]=i+1;
            z++;
        }


    }
        int f=min(m,min(l,k));
        cout<<f<<endl;
        for(int i=0;i<f;i++)
        {
            cout<<b[i]<<" "<<c[i]<<" "<<d[i]<<endl;
        }

    return 0;
}
