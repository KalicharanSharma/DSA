#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
int main(){
    int arr[]={3,5,2,8,6,5,1,0,87,4};
    int n=10,i,j,temp,index;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    display(arr,n);
    return 0;
}