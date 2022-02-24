#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b,sum1=0,sum2=0;
    cin>>n;
    pair<int,int> p[n];
    for (int i=0;i<n;i++)
    {
        cin>>p[i].first;
        cin>>p[i].second;

    }
    for (int i=0;i<n;i++)
    {
        if(p[i].first>p[i].second)
        {
            sum1++;
        }
    }
    for (int i=0;i<n;i++)
    {
        if(p[i].second>p[i].first)
        {
            sum2++;
        }
    }

    if(sum1>sum2)
    {
        cout<<"Mishka"<<endl;
    }
    else if(sum1<sum2)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}
