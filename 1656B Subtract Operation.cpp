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

    ll a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,q,r,t,u,v,w,x,y,z,cnt,sum,ans;

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

    //here is my code start...

    tst
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        m=0;
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            l=a[i]+k;
            if(binary_search(a+i+1,a+n,l))
            {
            cout<<"YES"<<endl;
            m=1;
            break;
            }
        }
        if(m==0)
        {
            cout<<"NO"<<endl;
        }

    }


    return 0;
}
