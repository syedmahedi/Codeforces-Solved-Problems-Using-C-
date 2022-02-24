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
        int n,x;
        cin>>n>>x;
        ll a[n];
        map<ll,ll>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if (m[a[i]]==0) continue;
            if(m[x*a[i]]>0)
            {
                m[x*a[i]]--;
                m[a[i]]--;
            }
            else
            {
                count++;
                m[a[i]]--;
            }
        }
        cout<<count<<endl;
    }


    return 0;
}
