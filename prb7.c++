#include <bits/stdc++.h>
using namespace std;

bool check(string &s, int i, int j)
{
    while(i<j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cin>>str;

    int n=str.length();

    //Method -1 : Brute Force , TC :O(N^3) (Note : May give TLE)

    
    // int maxlen=0;
    // int start_index=0;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=i; j<n; j++){
    //         if(check(str,i,j))
    //         {
    //             if(j-i+1>maxlen){
    //                 maxlen=j-i+1;
    //                 start_index=i;
    //             }
                
    //         }
    //     }
    // }
    // cout<<str.substr(start_index,maxlen);

    //Method-2 : Dynamic Programming(optimized), TC :O(N^2)

    bool DP[n][n];
    memset(DP,false,sizeof(DP));

    int maxlen=0;
    string res;

    for(int i=n-1; i>=0; i--) //palindrome check
    {
        for(int j=0; j<n; j++)
        {
            if(str[i]==str[j])
            {
                //If it is of two character OR if its susbtring is palindrome.
                if(j-i<3 || DP[i+1][j-1])
                {
                    //Then it will also a palindrome substring
                    DP[i][j]=true;
                    //Check for Longest Palindrome substring
                    if(j-i+1>maxlen)
                    {
                        maxlen=j-i+1;
                        res=str.substr(i,maxlen);
                    }
                }
            }
        }
    }
    cout<<res<<endl;
}