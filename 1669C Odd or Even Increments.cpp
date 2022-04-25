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

        int SetBit (int n, int X) { return n | (1 << X); }
        int ClearBit (int n, int X) { return n & ~(1 << X); }
        int ToggleBit (int n, int X) { return n ^ (1 << X); }
        bool CheckBit (int n, int X) { return (bool)(n & (1 << X)); }



    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        //here is my code start...

        tst
        while(t--)
        {
            int n,cnt2=0,cnt1=0,ct=0;
            cin>>n;
            int a[n];
            for(int i=0;i<n;i++)
            {
               cin>>a[i];
               if(a[i]%2==0)
                cnt2++;
               else
                cnt1++;

            }
            if(cnt1==n || cnt2==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                for(int i=0;i<n-1;i++)
                {
                    if(a[i]%2==0 && a[i+1]%2!=0 || a[i]%2!=0 && a[i+1]%2==0)
                    {
                        ct++;
                    }
                }
                if(ct==n-1)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }

        }


        return 0;
    }
