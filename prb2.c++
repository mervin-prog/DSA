// Find Kth largest element in array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    //for kth smallest element use Min - heap.
    //Method -1 : Priority Queue(Max - heap)
   
    // priority_queue<int> pq(arr,arr+num); //passing whole array to priority_queue.
    // while(k-->1){
    //     pq.pop();
    // }
    // int largestele=pq.top();
    // cout<<largestele<<endl;
   
    //Method -2 : Counting Sort
   
    int minval=INT_MAX;
    int maxval=INT_MIN;
    int largestele=-1;
    for(int i:arr){
        minval=min(minval,i);
        maxval=max(maxval,i);
    }
    vector<int> count(maxval-minval+1); //to store -ve indices also
    for(int i:arr){
        count[i-minval]++;
    }
    int remaining=k;
   
    //int i=0; i<count.size(); i++  -->for kth smallest element.
   
    for(int i=count.size()-1; i>=0; i--){
        remaining-=count[i];
        if(remaining<=0){
            largestele=i+minval;
            break;
        }
    }
    cout<<largestele<<endl;
}