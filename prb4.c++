// Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
//If there is such a triplet present in array, then print the triplet and return true. Else return false.
//3Sum -->leetcode

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no_ele;
    cin>>no_ele;
    int arr[no_ele];
    for(int i=0; i<no_ele; i++){
        cin>>arr[i];
    }
    int targetValue;
    cin>>targetValue;
    bool flag=false;

    //Method -1 : Brute Force , TC : O(N^3)

    // for(int i=0; i<no_ele-2; i++){
    //     for(int j=i+1; j<no_ele-1; j++){
    //         for(int k=j+1; k<no_ele; k++){
    //             int total=arr[i]+arr[j]+arr[k];
    //             if(total==targetValue)
    //             {
    //                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    //                 flag=true;
    //             }
    //         }
    //     }
    // }

    //Method -2 : Two pointer algorithm +set + sorting, TC : O(N^2)   

    sort(arr,arr+no_ele); 
    set<vector<int>>st;  //if no duplicate solution is needed.
    for(int i=0; i<no_ele; i++)
    {
        int left=i+1;
        int right=no_ele-1;

        while(left<right)
        {
            int current=arr[i];
            int total=current+arr[left]+arr[right];

            if(total==targetValue){
                st.insert({current,arr[left],arr[right]});
                flag=true;
                left++;
                right--;
            }
    
            else if(total<targetValue)
            left++;
            
            else if(total>targetValue)
            right--;
        }

    }

    for(auto i:st){
        for(auto val:i){
            cout<<val<<" ";
        }
    }
    
    cout<<endl;
    
    if(flag)
    cout<<"Present"<<endl;
    else
    cout<<"Not Present"<<endl;
}