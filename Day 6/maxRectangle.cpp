// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
   static int histogram(int a[], int m)
   {
        stack<int> ans;
        int top_val=0, max_area=0, area=0;
        int i = 0;
        
        while(i<m){
            
            if (ans.empty() || a[ans.top()] <= a[i])
                ans.push(i++);
 
            else {
                top_val =a[ans.top()];
                ans.pop();
                area = top_val * i;

                if (!ans.empty())
                    area = top_val * (i - ans.top() - 1);
               // area = (!ans.empty())?top_val * (i - ans.top() - 1) : top_val*i;
                max_area = max(area, max_area);
            }
        }
        
        while (!ans.empty()) {
            top_val = a[ans.top()];
            ans.pop();
           // area = (!ans.empty())?top_val * (i - ans.top() - 1) : top_val*i;
            area = top_val * i;
            if (!ans.empty())
                area = top_val * (i - ans.top() - 1);

            max_area = max(area, max_area);
        }
        return max_area;
        
    }
        
    int maxArea(int matrix[MAX][MAX], int n, int m) {
        // Your code here
        int result = histogram(matrix[0], m);
        
        for(int i = 1; i<n; i++){
            for(int j = 0; j<m; j++)
            {
                if(matrix[i][j]== 1) {
                    matrix[i][j] += matrix[i-1][j];
                }
                    
            } 
            

            result = max(result, histogram(matrix[i],m));
        }
        
        return result;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends
