#include <bits/stdc++.h>
using namespace std;

#define   ll    long long
#define   pb    push_back
#define   endl  "\n"
#define   mp    make_pair


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        int aa[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            aa[i]=a[i];
        }

        for(int i=1;i<n-1;i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                if (aa[i-1]!=a[i-1]) {
                    a[i - 1] = a[i];
                }
                else
                {
                    count++;
                    a[i+1]=a[i];

                }
            }
        }
        cout<<count<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }



    return 0;
}
