#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
void swap(int *a ,int *b ){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int arr[]={3,5,2,8,6};
    int n=5,i,j;

    for(i=0;i<n;i++){

        for(j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1])

                swap(&arr[j],&arr[j+1]);
        }
    }
    display(arr,n);
    return 0;
}