#include<bits/stdc++.h>
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
    int arr[]={3,5,2,8,6,5,1,0,87,4};
    int n=10,i,j,temp,index;
    for(i=0;i<n;i++){
        temp=arr[i];
        index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<temp){
                temp=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
    }
    display(arr,n);
    return 0;
}