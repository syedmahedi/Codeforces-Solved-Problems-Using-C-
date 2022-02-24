#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,count;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            count=abs(a-b)/10;
            if(abs(a-b)%10!=0)
                cout<<count+1<<endl;
            else
                cout<<count<<endl;
        }
        else
            cout<<"0"<<endl;
    }

    return 0;
}
