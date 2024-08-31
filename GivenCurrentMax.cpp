#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
   int  marks;
    student(string s,int roll,int marks)
    {
        this->name=s;
        this->roll=roll;
        this->marks=marks;

    }

};
class cmp
{
public:
bool operator()(student a,student b)
{

    if(a.marks<b.marks) 
    return true;
    else if(a.marks>b.marks) 
     return false;
   else
    {
        if(a.roll>b.roll) 
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
    priority_queue<student,vector<student>,cmp>pq;
    string name;
    int roll;
    int marks;
    for(int i=0;i<n;i++)
    {
cin>>name>>roll>>marks;
student obj(name,roll,marks);
pq.push(obj);
    }
   // cout<<endl;
   int q,test,val;
    cin>>q;
    while(q--)
    {
        cin>>test;
        if(test==0)
        {
            cin>>name>>roll>>marks;
            student obj(name,roll,marks);
             pq.push(obj);
         cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(test==1)
        {
            if(!pq.empty())
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
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
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else cout<<"Empty"<<endl;
            }
            else  cout<<"Empty"<<endl;

        }
    }
    

    return 0;
}
