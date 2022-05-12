#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    #define   ll         long long int
    #define   ull        unsigned long long int
    #define   pb         push_back
    #define   endl       "\n"
    #define   mp         make_pair
    #define   yes        cout<<"YES\n"
    #define   no         cout<<"NO\n"
    #define   tst        int t;cin>>t;
    #define   all(x)     x.begin(),x.end()
    #define   Read(x)    freopen(x,"r",stdin)
    #define   Write(x)   freopen (x,"w",stdout
    #define   erase_duplicates(x)     x.erase(unique(all(x)),x.end());

//check
    bool   isPrime(ll n){if(n<=1)return false;
           if(n<=3)return true;if(n%2==0|n%3==0)return false;
           for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

//mathmatics funtion
    ll     gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
    ll     lcm(ll a, ll b){return (a/gcd(a,b)*b);}

    int SetBit (int n, int X) { return n | (1 << X); }
    int ClearBit (int n, int X) { return n & ~(1 << X); }
    int ToggleBit (int n, int X) { return n ^ (1 << X); }
    bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //here is my code start...


    tst
    while(t--)
    {

        int n,x,even=0,odd=0,s=0;
        cin>>n>>x;
        int a,b[n],c[n];

        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                even++;
            }
            else
                odd++;


        }

        if(odd==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1;i<=odd;i+=2)
        {
            int k=x-i;
            if(k>=0 && k<=even)
            {
                s=1;
            }
        }
        if(s==1)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;



    }


    return 0;
}
