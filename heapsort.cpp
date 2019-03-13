#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{

    int largest =i;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n&&arr[l]>arr[i])
        largest = l;
    if (r<n&&arr[r]>arr[i])
        largest = r;
    if(largest!=i)
    {
        swap(arr[0],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    for(int i=n/2 -1;i>=0;i--)
        heapify(arr,n,i);

    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
int main()
{
    int arr[]={45,30,20,1,100,40,100,150,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    cout<<"Sorted array is  ";
    printarray(arr,n);

}
