#include <bits/stdc++.h>
using namespace std;
#define   ll    long long
#define   pb    push_back
#define   endl  "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    double sum=(sqrt(3)+sqrt(5)+sqrt(7));
//    double sum1=1.723+2.236+2.646;
//
//    cout<<"er: "<<(abs(sum-sum1)/sum)<<endl;
//
//
//    double x=22/7;
//    double x1=3.1415926;

//    cout<<"ea:  "<<abs(x-x1)<<"er: "<<(abs(x-x1)/x)<<endl;


    int k,n,count=0;
    cin>>k>>n;
    int x[n],y[n];
    pair<int ,int>p[1000];

    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        if(k<=p[i].first)
        {
            count++;
            break;
        }
        else
        {
            k+=p[i].second;

        }
    }
    if(count>0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
