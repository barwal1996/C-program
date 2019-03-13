#include<iostream.h>
using namespace std;
void insertionSort(int arr[],int length);
void printArray(int array[],int size);

int main()
{
    int array[5] = {5, 1, 6, 2, 4, 3};
    insertionSort(6);
    return 0;

}
void insertionSort(int arr[],int length)
{
    int i,j,key;
    for(i=1;i<length;i++)
    {
        j=i;
         while(j>0&& arr[j-1]> arr[j])
         {
             key=arr[j];
             a[j]=a[j-1];
             a[j-1]=key;
             j--;

         }

    }
    cout<<"Sorted array ";
    printArray(arr,length);
}
void printArray(int array[],int size)
{
    int j;
    for(j=0;j<size;j++)
    {
        cout<<"  " <<array[j];
    }
}

