//Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int flag=0;
    //Method -1 :Brute force /TC :O(N2)
   
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]+arr[j]==target){
    //         cout<<arr[i]<<" "<<arr[j]<<endl;
    //         flag=1;
    //         break;
    //         }
    //     }
    // }
   
    //  if(flag==0)
    // cout<<"-1";
   
    //Method -2 :Two Pointers /TC :O(Nlogn)
   
    // sort(arr,arr+n);
    // int left=0,right=n-1;
    // while(left<right){
    //     int sum=arr[left]+arr[right];
    //     if(sum==target){
    //         cout<<arr[left]<<" "<<arr[right]<<endl;
    //         flag=1;
    //         break;
    //         }
    //     else if(sum<target)
    //     left++;
    //     else
    //     right--;
    // }
   
    // if(flag==0)
    // cout<<"-1";
   
    //Method -3 :Hashing/TC :O(N)
   
    unordered_set<int> st;
    for(int i: arr){
        int temp=target-i;
        if(st.find(temp)!=st.end()){
        cout<<target-i<<" "<<i<<endl;
        flag=1;
        break;
        }
        st.insert(i);
    }
     if(flag==0)
     cout<<"-1";
}