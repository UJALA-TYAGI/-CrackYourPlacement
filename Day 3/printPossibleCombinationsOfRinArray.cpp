#include<bits/stdc++.h>
using namespace std;

class solution{

public:
    vector<vector<int>> ans;
    void helper(vector<int>& arr, int n, int r, int index, int i, vector<int> temp){
    
        if(index==r){
            ans.push_back(temp);
            return;
            // for(int k =0; k<temp.size(); k++){
            //     cout<<temp[k]<<" ";
            // }
            // cout<<endl;
            // return;
        }
    
        if(i>=n) return;
    
        temp[index] = arr[i];
    
        helper(arr, n, r, index+1, i+1, temp);
        while (arr[i] == arr[i+1])
            i++;
        helper(arr, n, r, index, i+1, temp);
    
    }
    
    vector<vector<int>> combination(vector<int>& arr, int n, int r){
        sort(arr.begin(), arr.end());
        vector<int> temp(r);
        helper(arr,n,r,0,0,temp);
        return ans;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> arr = {1,2,3,4,5};
    int x;
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }
    int r;
    cin>>r;
    solution obj;
    // obj.combination(arr, n, r);
    vector<vector<int>> res = obj.combination(arr, n, r);

    for(int i = 0; i<res.size(); i++){
        for(int j = 0; j<res[0].size(); j++){
            cout<<res[i][j]<<" ";
        }

        cout<<endl;
    }
    cout<<res.size()<<endl;
    cout<<res[0].size();
    return 0;
}

