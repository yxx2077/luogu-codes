#include<iostream>
using namespace std;
const int N=100001;

void quickSort(int arr[],int l,int r)
{
    if(l>=r)return;

    int pivot=arr[(l+r)/2];
    int i=l-1,j=r+1;
    while(i<j)
    {
        do{i++;}while(arr[i]<pivot);
        do{j--;}while(arr[j]>pivot);
        if(i<j)swap(arr[i],arr[j]);
    }
    quickSort(arr,l,j);
    quickSort(arr,j+1,r);
    return;
}

int main()
{
    int n,arr[N];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,1,n);
    for(int i=1;i<=n;i++)cout<<arr[i]<<' ';
    return 0;
}