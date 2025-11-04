#include<iostream>
using namespace std;
const int N=2000001;
int arr[N];

void quick_sort(int arr[],int l,int r)
{
    if(l>=r)return;

    int i=l-1,j=r+1,pivot=arr[l+r>>1];
    while(i<j)
    {
        do{i++;}while(arr[i]<pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)swap(arr[i],arr[j]);
    }
    quick_sort(arr,l,j);
    quick_sort(arr,j+1,r);
    return;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)cin>>arr[i];

    quick_sort(arr,1,m);

    for(int i=1;i<=m;i++)cout<<arr[i]<<' ';
    return 0;
}