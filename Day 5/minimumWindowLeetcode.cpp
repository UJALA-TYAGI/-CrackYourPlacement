class Solution {
public:
    string minWindow(string s, string p) {
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
       return "";
    }
};
