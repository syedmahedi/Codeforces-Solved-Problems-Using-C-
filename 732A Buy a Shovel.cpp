#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k,r,count=0,i=0,h;
    cin>>k>>r;


    while(h%10!=0 || h%10!=r)
    {
        count++;
        i++;
        h=k*i;
        if(h%10==0 || h%10==r)
        {
            break;
        }

    }
    cout<<count<<endl;

    return 0;
}
