#include <bits/stdc++.h>
using namespace std;

#define   ll    long long
#define   pb    push_back
#define   endl  "\n"
#define   mp    make_pair
#define   endl  "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum=sum|a;
        }
        cout<<sum<<endl;
    }

    return 0;
}
