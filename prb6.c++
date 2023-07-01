// Given two strings S1 and S2, The task is to find if S1 is a substring of S2. 
// If yes, return the index of the first occurrence, else return -1.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1; //substring(check)
    cin>>s2; //original string

    int len1=s1.length();
    int len2=s2.length();

    //Method -1 : brute force , TC :O(len1 * len2)

    //int flag=0;
    // for(int i=0; i<len2-len1; i++){
    //     int j;
    //     for(j=0; j<len1; j++){
    //         if(s2[i+j]!=s1[j])
    //         {
    //             flag=-1;
    //             break;
    //         }
    //     }
    //     if(j==len1)
    //     {
    //             flag=i;
    //             break;
    //     }
    // }
    // cout<<flag<<endl;

    //Method -2 : Using STL function , TC : O(N)

    if(s2.find(s1)!= string ::npos)
    cout<<s2.find(s1)<<endl;
    else
    cout<<"-1"<<endl;
}