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

    cin>>n>>m;
    string s,s1;
    pair<string,string >p[m];
    for(int i=0;i<m;i++)
    {
        cin>>s>>s1;
        p[i].first=s;
        p[i].second=s1;
    }
    string s3;
    for(int i=0;i<n;i++)
    {
        cin>>s3;
        for(int i=0;i<m;i++)
        {
           if(s3==p[i].first || s3==p[i].second)
           {
               if((p[i].first).length()<=(p[i].second).length())
               {
                   cout<<p[i].first<<" ";
               }
               else
                cout<<p[i].second<<" ";
           }
        }
    }
    cout<<endl;



    return 0;
}
