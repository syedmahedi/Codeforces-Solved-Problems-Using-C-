#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,count=0;;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
        }
        else
        {
            cout<<(n-1)/2<<endl;
        }

    }

    return 0;
}
