#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    for(int i=2;i>=0;i--)
    {
        cout<<a[3]-a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
