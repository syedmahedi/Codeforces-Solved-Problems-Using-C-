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

    test
    while(t--)
    {

        int a=0,b=0,m=0;
        string s;
        cin>>s;

        if(s.size()<2)
        {
            cout<<"NO"<<endl;
        }
        else if(s[0]=='B' || s[s.size()-1]=='A')
            cout<<"NO"<<endl;
        else
        {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {
                b++;
            }
            else
                a++;
            if(b>a)
            {
                m=1;
                break;
            }

        }

        if(m==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }
    }




    return 0;
}
