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

//mathmatics funtion
    ll     gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
    ll     lcm(ll a, ll b){return (a/gcd(a,b)*b);}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        if(y1==y2 && y3<y2 || y2==y3 && y1<y3 || y3==y1 && y2<y3)
        {
            if(y1==y2)
            {
                cout<<abs(x1-x2)<<endl;
            }
            else if(y2==y3)
            {
                cout<<abs(x2-x3)<<endl;
            }
            else
                cout<<abs(x3-x1)<<endl;
        }
        else
            cout<<0<<endl;

    }


    return 0;
}
