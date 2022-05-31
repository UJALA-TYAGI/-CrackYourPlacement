class Solution {
public:
    int calculate(string s) {
        s += '+';
        stack<int>x; 
        
        char sign='+';
        int curr=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                curr=10*curr+(s[i]-'0');
            }
            
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*'  ||s[i]=='/' )
            {
                if(sign=='+')
                {
                    x.push(curr);
                }
                
                else if(sign=='-')
                {
                    x.push(-curr);
                }
                
                else if(sign=='*')
                {
                    int a=x.top();
                    x.pop();
                    int b=curr*a;
                    x.push(b);
                }
                
                else if(sign=='/')
                {
                    int a=x.top();
                    x.pop();
                    int b=a/curr;
                    x.push(b);
                }
                curr=0;
                sign=s[i];
                //store previously stored sign
            }
            
        }
         while(!x.empty())
            {
                ans=ans+x.top();
                x.pop();
            }
            return ans;
    }
};
