#include<iostream>
#include<climits>
using namespace std;

unsigned long long ans = 0;

void merge(unsigned int arr[],int first,int mid,int last)
{
    
    unsigned int *tmpArr=new unsigned int[last-first+1];
    int i=first,j=mid+1;
    int cur=0;
    while(i<=mid && j<=last)
    {
        if(arr[i]<arr[j])
        {
            tmpArr[cur++]=arr[i++];
        }
        else
        {
            tmpArr[cur++]=arr[j++];
            
            ans += mid-i+1;//只增加这一句便可求逆序数
        }
    }
    if(i<=mid)
    {
        while(i<=mid)
            tmpArr[cur++]=arr[i++];
    }
    else
    {
        while(j<=last)
            tmpArr[cur++]=arr[j++];
    }
    
    
    for(int k=0;k<cur;k++)
    {
        arr[first++]=tmpArr[k];
    }
    delete[] tmpArr;
    tmpArr=NULL;
}



void mergeSort(unsigned int arr[],int first,int last)
{
    if(first==last)
        return;
    int mid=(first+last)/2;
    mergeSort(arr,first,mid);
    mergeSort(arr,mid+1,last);
    merge(arr,first,mid,last);
}

int main()
{
    int n = 0;
    while(cin>> n){
        unsigned int *arr = new unsigned int[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        mergeSort(arr,0,n-1);
        cout<<ans<<endl;
        delete []arr;
        ans = 0;
    }
    
    return 0;
}



