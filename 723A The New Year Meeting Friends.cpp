#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int a,b,c;
    cin>>a>>b>>c;
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);

    int k =*(--s.end());
    int k1=*s.begin();
    int k2=*(++s.begin());

    cout<<(k2-k1)+(k-k2)<<endl;





    return 0;
}
