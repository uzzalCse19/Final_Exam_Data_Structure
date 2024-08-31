#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++){
    string str;
 map<string,int>mp;
 getline(cin, str);
stringstream ss(str);
int max=0;
string ans;
string word;
while(ss>>word)
{
    mp[word]++;
    if(mp[word]>max) 
    {
        max=mp[word];
        ans=word;
    }
}
cout<<ans<<" "<<max<<endl;
    }
    return 0;
}
