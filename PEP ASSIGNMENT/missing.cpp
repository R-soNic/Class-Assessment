#include<bits/stdc++.h>
using namespace std;

int missing(int arr[],int n){
    int sum1=0,fsum=0;
    sort(arr);
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
    
    return 0;
}