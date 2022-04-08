#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    #define   ll    long long
    #define   pb    push_back
    #define   endl  "\n"
    #define   mp    make_pair
    #define   yes   cout<<"YES\n"
    #define   no    cout<<"NO\n"
    #define   test  int t;cin>>t;

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

   int n;
   cin>>n;
   vector<int >v,v1,v2,v3;
   int a;
   for(int i=0;i<n;i++)
   {
       cin>>a;
       v.pb(a);
       if(v[i]<0)
       {
           v1.pb(v[i]);
       }
       else if(v[i]>0)
       {
           v2.pb(v[i]);
       }
       else
        v3.pb(v[i]);
   }
   if(v2.empty())
   {
       v2.pb(v1[v1.size()-1]);
       v1.pop_back();
       v2.pb(v1[v1.size()-1]);
       v1.pop_back();
   }
   if(v1.size()%2==0)
   {
       v3.pb(v1[v1.size()-1]);
       v1.pop_back();
   }

   cout<<v1.size()<<" ";
   for(auto &x:v1)
   {
       cout<<x<<" ";
   }
   cout<<endl;

   cout<<v2.size()<<" ";
   for(auto &x:v2)
   {
       cout<<x<<" ";
   }
   cout<<endl;

   cout<<v3.size()<<" ";
   for(auto &x:v3)
   {
       cout<<x<<" ";
   }
   cout<<endl;



    return 0;
}
