#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,c=0,count=0;
    cin>>n;
    int a[n];
    while(n--)
    {
        int k;
        cin>>k;
        for (int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k-1;i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                count++;

            }
            else
                c++;

        }
        cout<<c<<" "<<count<<endl;
        if(c==k-1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        c=0;
        count=0;
    }

    return 0;
}
