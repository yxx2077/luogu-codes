#include<iostream>
using namespace std;
const int N=100;
int n,a[N];

void quick_sort(int a[],int l,int r)
{
    if(l>=r)return;
    int pivot=a[l+r>>1];
    int i=l-1,j=r+1;
    while(i<j)
    {
        do{i++;}while(a[i]<pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)swap(a[i],a[j]);
    }
    quick_sort(a,l,j);
    quick_sort(a,j+1,r);
    return;
}
    
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    int temp=1;
    for(int i=1;i<n;i++)if(a[i]!=a[i-1])temp++;
    printf("%d\n%d ",temp,a[0]);
    for(int i=1;i<n;i++)if(a[i]!=a[i-1])printf("%d ",a[i]);
    return 0;
}