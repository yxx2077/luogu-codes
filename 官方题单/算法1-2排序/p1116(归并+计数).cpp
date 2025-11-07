#include<iostream>
using namespace std;
const int N=10001;
int a[N],ans=0,temp[N];

void merge_sort(int a[],int l,int r,int temp[])
{
    if(l>=r)return;
    int mid=(l+r)>>1;
    merge_sort(a,l,mid,temp);
    merge_sort(a,mid+1,r,temp);
    int began1=l,end1=mid;
    int began2=mid+1,end2=r;
    int len=l;
    while(began1<=end1&&began2<=end2)
    {
        if(a[began1]<=a[began2])temp[len++]=a[began1++];
        else temp[len++]=a[began2++],ans+=mid-began1+1;
    }
    if(began1<=end1)
    {
        while(began1<=end1)temp[len++]=a[began1++];
    }
    else
    {
        while(began2<=end2)temp[len++]=a[began2++];
    }
    for(int i=l;i<=r;i++)a[i]=temp[i];
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    merge_sort(a,1,n,temp);
    printf("%d",ans);
    return 0;
}