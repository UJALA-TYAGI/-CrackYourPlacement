// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    unordered_map<int,int>mp;
    for(int i=0;i<size;i++)
    {
     // two cases: when arr[i] is greater or arr[j] is greater
        auto itr1 =mp.find(arr[i]+n);
        auto itr2 = mp.find(arr[i]-n);
        if(itr1!=mp.end() || itr2!=mp.end()) return true;
        mp[arr[i]] = i;
    }
    return false;
}
