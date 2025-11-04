#include<iostream>
using namespace std;
const int N=5000000;
int n,k,a[N];

void _mergesort(int* a,int l,int r,int* temp)
{
    if(l>=r)return;
    int mid=(l+r)>>1;
    _mergesort(a,l,mid,temp);
    _mergesort(a,mid+1,r,temp);
    int i=l;
    int began1=l,end1=mid;
    int began2=mid+1,end2=r;
    while(began1<=end1&&began2<=end2)
    {
        if(a[began1]<=a[began2])temp[i++]=a[began1++];
        else temp[i++]=a[began2++];
    }
    if(began1<=end1)
    {
        while(began1<=end1)temp[i++]=a[began1++];
    }
    else
    {
        while(began2<=end2)temp[i++]=a[began2++];
    }
    for(int j=l;j<=r;j++)a[j]=temp[j];
    return;
}

void merge_sort(int* a,int n)
{
    int* temp=(int*)malloc(sizeof(int)* n);
    _mergesort(a,0,n-1,temp);
}

int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    merge_sort(a,n);
    printf("%d",a[k]);
    return 0;
}