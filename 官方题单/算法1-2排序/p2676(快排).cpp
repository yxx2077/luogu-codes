#include<iostream>
using namespace std;
const int N=20001;
int a[N];

void quick_sort(int a[],int l,int r)
{
    if(l>=r)return;
    int pivot=a[(l+r)>>1];
    int i=l-1,j=r+1;
    while(i<j)
    {
        do{i++;}while(a[i]>pivot);
        do{j--;}while(a[j]<pivot);
        if(i<j)swap(a[i],a[j]);
    }
    quick_sort(a,l,j);
    quick_sort(a,j+1,r);
    return;
}

int main()
{
    int n,B;
    scanf("%d %d",&n,&B);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    quick_sort(a,1,n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>=B)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}