#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    int a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        if((c+a)%(2*b)==0 || (((2*b)-c)%a==0 && ((2*b)-c)>0) || (((2*b)-a)%c==0 && ((2*b)-a)>0))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
