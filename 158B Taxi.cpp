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

    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0,count=0;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t==1){
            a++;
        }else if(t==2){
            b++;
        }else if(t==3){
            c++;
        }else{
            d++;
        }
    }

    count+=d;

    if(c<a){
        count+=c;
        a=a-c;
        c=0;
    }else if(a<=c){
        count+=a;
        c=c-a;
        a=0;
    }

    if(c>0){
        count+=c;
        c=0;
    }

    if(b>0){
        count+= b/2;
        b = b%2;
    }

    int left = a + (b*2); // 1 1 2 -> 1 2 group multiply 2;1111
    if(left<=4 && left>0){
        count+=1;
    }else if(left%4 !=0){
        count+= (left/4)+1; /// 1 1 1 1 1 2  2 2 2 2 --> 16 %4=0 --> 4 15 %4 --> 3 + 1
    }else{
        count+= left/4;
    }

    cout<<count<<"\n";

    return 0;
}
