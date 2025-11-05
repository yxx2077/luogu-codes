#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
    string s;
    int id;
}a[21];

bool cmp(node a,node b)
{
    if(a.s.size()==b.s.size())return a.s>b.s;
    else return a.s.size()>b.s.size();
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].s;
        a[i].id=i;
    }
    sort(a+1,a+1+n,cmp);
    cout<<a[1].id<<endl<<a[1].s;
    return 0;
}