#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,t,count=0,i=1,sum=0;
    cin>>n>>t;
    int  k=t/60;
    int  r=(4-k)*60;
    while(i<=n)
    {

        sum+=5*i;
        i++;
        if(sum>r)
        {
            break;
        }
        count++;

    }
    cout<<count<<endl;

    return 0;
}
