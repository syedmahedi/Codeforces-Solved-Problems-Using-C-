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
        string s,s1;
        cin>>s>>s1;

        int l=s.size();
        int l1=s1.size();

        int k=lcm(l,l1);

        while(l<k)
        {
            s.append(s);
            l=s.size();
            if(l==k) break;
        }
        while(l1<k)
        {
            s1.append(s1);
            l1=s1.size();
            if(l1==k) break;
        }
        string s2=s.substr(0,k);
        string s3=s1.substr(0,k);

        if(s2==s3)
        {
            cout<<s2<<endl;
        }
        else
            cout<<-1<<endl;





    }


    return 0;
}
