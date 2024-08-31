#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int>s;
        int n;
        cin>>n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        for(auto val:s) cout<<val<<" ";
        cout<<endl;
    }
}