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
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v1;
        vector<int>v2;
        int k=count(s.begin(),s.end(),'0');
        int k1=count(s.begin(),s.end(),'1');

        for(int i=0;i<k;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
                v1.pb(i);
            }
        }
        for(int i=k;i<n;i++)
        {
            if(s[i]=='0')
            {
                cnt++;
                v2.pb(i);
            }
        }
        if(cnt==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
        cout<<"1"<<endl;
        cout<<cnt<<" ";
        for(auto x:v1)
        {
            cout<<x+1<<" ";
        }
        for(auto y:v2)
        {
            cout<<y+1<<" ";
        }
        cout<<endl;
        }

    }


    return 0;
}
