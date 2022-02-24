 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for (int i=0;i<t;i++)
    {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;


    string s1=string(s.rbegin(),s.rend());
    if(k==0)
    {
        cout<<"1"<<endl;
    }
    else if(s1==s)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"2"<<endl;
    }

    }

    return 0;
}

