#include <bits/stdc++.h>
using namespace std;
class pairs
{
public:
    string s;
    int v;
    pairs(string s,int v)
    {
        this->s=s;
        this->v=v;
    }

};
class cmp
{
public:
bool operator()(pairs a,pairs b)
{

    if(a.s>b.s) 
    return true;
    else if(a.s<b.s) 
     return false;
   else
    {
        if(a.v<b.v) 
        return true;
        else 
         return false;
    }
}
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    priority_queue<pairs,vector<pairs>,cmp>pq;
    string s;
    int v;
    for(int i=0;i<n;i++)
    {
cin>>s>>v;
pairs obj(s,v);
pq.push(obj);
    }
   // cout<<endl;
    while (!pq.empty())
    {
      cout<<pq.top().s<<" "<<pq.top().v<<endl;
        pq.pop();
    }

    return 0;
}
