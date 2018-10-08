#include<bits/stdc++.h>
using namespace std;
#define SIZE 100001
int main()
{
    int n,k,i,cnt=0;
    int a[SIZE],b[SIZE];

    vector<pair<int,int> > v;
    vector <int> c;

    cin>>n>>k;

    for(i=0 ;i<n ;i++)     cin>>a[i];
    for(i=0 ;i<n ;i++)    cin>>b[i];

    for(int i=0; i<n; i++)
    {
        v.push_back(make_pair(a[i]+b[i],i+1));
    }

    sort(v.begin(),v.end());

    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum+=v[i].first;
        if(sum<=k)
            c.push_back(v[i].second),cnt++;
    }
    sort(c.begin(),c.end());

    cout<<cnt<<endl;

    for(int i=0 ; i<c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}
