#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        pq.push(x);
    }
    int q,test,val;
    cin>>q;
    while(q--)
    {
        cin>>test;
        if(test==0)
        {
            cin>>val;
            pq.push(val);

            cout<<pq.top()<<endl;
        }
        else if(test==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else cout<<"Empty"<<endl;
        }
        else
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty())
                {
                    cout<<pq.top()<<endl;
                }
                else cout<<"Empty"<<endl;
            }
            else  cout<<"Empty"<<endl;

        }
    }
    return 0;
}
