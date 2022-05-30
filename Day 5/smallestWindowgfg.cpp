// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
              unordered_map<char, int>mp;
       for(int i=0; i<p.length(); i++)
       {
           mp[p[i]]++;
       }
       int i=0, j=0, mn=INT_MAX, start=0;
       int count=mp.size();
       while(j<s.size())
       {
           mp[s[j]]--;
           if(mp[s[j]]==0)
           count--;
   
           if(count==0)
           {
               while(count==0)
               {
                   if(mn>j-i+1){
                   mn=min(mn, j-i+1);
                   start=i;
                   }
                   mp[s[i]]++;
                   if(mp[s[i]]>0)
                   count++;
                    
                    i++;       
               }
           }
           j++;
       }
       if(mn!=INT_MAX)
       return s.substr(start, mn);
       else 
       return "-1";
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
