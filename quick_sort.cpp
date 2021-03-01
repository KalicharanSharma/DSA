#include<bits/stdc++.h>
using namespace std;
void swap(int *a ,int *b ){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    int j=l;
    for(j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return i+1;
}
void quickSort(int arr[], int l, int h){
    if(l<h){
        int pivot=partition(arr, l, h);
        quickSort(arr, l, pivot-1);
        quickSort(arr, pivot+1, h);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {3,5,2,8,6,5,1,0,87,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    display(arr, n);
    return 0;
}