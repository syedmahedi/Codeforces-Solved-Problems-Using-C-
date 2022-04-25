#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    #define   ll    long long
    #define   pb    push_back
    #define   endl  "\n"
    #define   mp    make_pair
    #define   yes   cout<<"YES\n"
    #define   no    cout<<"NO\n"
    #define   tst   int t;cin>>t;


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
        int n,l=-1,r=-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==2)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==3)
        {
            if(a[0]==a[1]&& a[1]==a[2])
                cout<<1<<endl;
            else
                cout<<0<<endl;

            continue;
        }
        int e=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
                e++;
        }
        if(e<2)
        {
            cout<<0<<endl;
            continue;
        }

            for(int i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                {
                    l=i+1;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]==a[i-1])
                {
                    r=i-1;
                    break;
                }
            }




                if(l==r or l+1==r)
                    cout<<1<<endl;
                else
                    cout<<r-l<<endl;





    }




    return 0;
}
