#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,count=0;
    cin>>n;
    int ar[n+8];
    int a=0,b=0,i=1;
    for(int k=0;k<n;k++)
    {
        cin>>ar[k];
    }
    int max=ar[0];
    int min=ar[0];

    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            count++;
        }
        if(ar[i]<min)
        {
            min=ar[i];
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}

