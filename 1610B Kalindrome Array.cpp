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


    tst
    while(t--)
    {
        int n,flag=0,k,l,a;
        cin>>n;
        int v[n+9];
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<=n/2;i++)
        {
            if (v[i] != v[n-i-1])
            {
                flag=1;
                k=v[i];
                l=v[n-i-1];
                break;
            }

        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
        {
            for(int i=0; i<n; i++) if(v[i]!=k) v1.pb(v[i]);
            for(int i=0; i<n; i++) if(v[i]!=l) v2.pb(v[i]);


         vector<int>t1,t2;
         t1=v1,t2=v2;
         reverse(v1.begin(),v1.end());
         reverse(v2.begin(),v2.end());
         if(t1==v1  || t2==v2)
         {
             cout<<"YES"<<endl;
             continue;
         }
         cout<<"NO"<<endl;
        }



    }




    return 0;
}
