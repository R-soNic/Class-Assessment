#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){
    int l=0,h=1;
    for(int i=0;i<n;i++){
        if()
    }
}

int missing(int arr[],int &n){
    int sum1=0,fsum=0;
    sort(arr,n);
    int l=arr[0],h=arr[n-1];
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }
    for(int i=l;i<h;i++){
        fsum+=i;
    }
    int ans=fsum-sum1;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missing(arr,n);
    return 0;
}