#include<iostream>
#include<algorithm>
using namespace std;
struct S
{
    int a,b,c;
    int sum;
    int m;
}s[301];

bool cmp(S a,S b)
{
    if(a.sum==b.sum)
    {
        if(a.a==b.a)return a.m<b.m;
        else return a.a>b.a;
    }
    else return a.sum>b.sum;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].a>>s[i].b>>s[i].c;
        s[i].sum=s[i].a+s[i].b+s[i].c;
        s[i].m=i;
    }
    sort(s+1,s+n+1,cmp);
    for(int i=1;i<=5;i++)cout<<s[i].m<<' '<<s[i].sum<<endl;
    return 0;
}