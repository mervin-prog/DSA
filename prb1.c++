// Given a binary array, sort it using one traversal and no extra space (or extra space)

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}
int main()
{
    int  num;
    cin>>num;
    
    int arr[num];
    for(int it=0; it<num; it++)
    {
        cin>>arr[it];
    }
    
    //method -1 : no extra space
    //int ptr=-1;
    // for(int i=0; i<num; i++){
    //     if(arr[i]==0){
    //         ptr++;
    //         swap(arr[i],arr[ptr]);
    //     }
    // }
    // for(int i=0; i<num; i++){
    //     cout<<arr[i]<<" ";
    // }

    //method-2 : extra space(sorting)
    // sort(arr,arr+num);
    // for(int i=0; i<num; i++){
    //     cout<<arr[i]<<" ";
    // }

    //method -3 : extra space(priority queue)
    // priority_queue<int , vector<int> , greater<int>> pq;
    
    // for(int i: arr){
    //     pq.push(i);
    // }
    
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
}