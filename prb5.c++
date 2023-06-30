//A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, 
//return the index to any of the peaks.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Method -1 : Linear Scan , TC: O(N)

    // for(int i=0; i<n-1; i++){
    //     if(arr[i]>arr[i+1]){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }

    //Method -2 :Binary Search, TC : O(log n)

    int left=0,right=n-1;
    while(left<right){

        int mid=(left+right)/2;

        if(arr[mid]>arr[mid+1])
        right=mid;

        else
        left=mid+1;
    }
    cout<<left<<endl;

}