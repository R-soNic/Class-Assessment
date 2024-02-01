#include <bits/stdc++.h> 
using namespace std; 

void printDuplicates(int arr[], int n){ 	
    unordered_map<int, int> freq; 
	for (int i=0; i<n; i++) 
		freq[arr[i]]++; 

	bool dup = false; 
	unordered_map<int, int>:: iterator itr; 
	for (itr=freq.begin(); itr!=freq.end(); itr++) 
	{ 
		if (itr->second > 1) 
		{ 
			cout << itr->first << " "; 
			dup = true; 
		} 
	} 
	if (dup == false) 
		cout << "-1"; 
} 

int main() 
{ 
	int n ;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	printDuplicates(arr, n); 
	return 0; 
} 
