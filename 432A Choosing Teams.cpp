#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]+k;
        if(a[i]<=5)
        {
            count++;
        }
    }
    cout<<floor(count/3)<<endl;

    return 0;
}
