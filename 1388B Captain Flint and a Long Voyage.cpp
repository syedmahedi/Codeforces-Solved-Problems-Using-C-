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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //here is my code start...


    tst
    while(t--)
    {
        int n;
        cin>>n;
        int k=n/4;
        string s;

        for(int i=0;i<k;i++)
        {
            s+='8';
        }

        int m=n%4;
        if(m!=0)
        {
            s+='8';
        }

        int l=s.size();

        for(int i=0;i<n-l;i++)
        {
            s+='9';
        }
        reverse(s.begin(),s.end());


        cout<<s<<endl;
    }

    return 0;
}
