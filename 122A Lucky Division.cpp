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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int k=count(s.begin(),s.end(),'4');
    int k1=count(s.begin(),s.end(),'7');
    int x=stoi(s);

    if( k+k1==s.size() || x%4==0 ||x%7==0 || x%47==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;





    return 0;
}
