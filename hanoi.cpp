#include<bits/stdc++.h>
using namespace std;

int BS(vector<int>arr,int s,int first,int last){
    if(first>last){
        return -1;
    }
    int mid=(first+last)/2;
    if(arr[mid]==s)return mid;
    else if(arr[mid]>s){
        return BS(arr,s,first,mid-1);
    }else
        return BS(arr,s,mid+1,last);
}

void hanoitower(int start,int end,char source,char aux,char dest){
    if(start>end)return;
    hanoitower(start,end-1,source,dest,aux);
    cout<<"Move disk "<<end<<" from "<<source<<" to "<<dest<<endl;
    hanoitower(start,end-1,aux,source,dest);

}

int main(){
    // int n;
    // cin>>n;
    // vector<int>arr;
    // i=0;
    // while(n--){
    //     cin>>arr[i];
    //     i++;
    // }
    // cout<<BS(arr,100,0,6)<<endl;

    hanoitower(1,3,'A','B','C');
    return 0;
}