 #include <bits/stdc++.h>
using namespace std;


bool arraySortedOrNot(int a[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    return a[n - 1] >= a[n - 2] &&
     arraySortedOrNot(a, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(arraySortedOrNot(a,n))
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;

    }

    return 0;
}
