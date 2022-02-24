#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    #define   ll    long long
    #define   pb    push_back
    #define   endl  "\n"
    #define   mp    make_pair
    #define   yes   cout<<"YES\n";
    #define   no    cout<<"NO\n";

//check
    bool   isPrime(ll n){if(n<=1)return false;
           if(n<=3)return true;if(n%2==0|n%3==0)return false;
           for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll x,n,z=0;
        cin>>x>>n;
        if(n%4==0)
        {
            z=0;
        }
        else if(n%4==1)
        {
            z=-n;
        }
        else if(n%4==2)
        {
            z=1;
        }
        else if(n%4==3)
        {
            z=n+1;
        }

        if(x%2==0)
        {
            cout<<x+z<<endl;
        }
        else
            cout<<x-z<<endl;

    }


    return 0;
}
