class Solution {
public:
    
    // function for method 1
    //  void addingpar(vector<string> &v, string str, int n, int m)
    // {
    //     if(n==0 && m==0) {
    //         v.push_back(str);
    //         return;
    //     }
    //     if(m > 0)
    //      { 
    //          addingpar(v, str+")", n, m-1);
    //      }
    //     if(n > 0)
    //      { 
    //        addingpar(v, str+"(", n-1, m+1);
    //      }
    //  }
    
    //function for method 2
    //  void addingpar(vector<string> &v, string str, int n, int m)
    // {
    //     if(n==0 && m==0) {
    //         v.push_back(str);
    //         return;
    //     }
    //     if(m > n)
    //      { 
    //          addingpar(v, str+")", n, m-1);
    //      }
    //     if(n > 0)
    //      { 
    //        addingpar(v, str+"(", n-1, m);
    //      }
    //  }
    
    //function for method 3
    void addingpar(vector<string> &v, string str, int n, int m){
        if(n==0 && m==0) {
            v.push_back(str);
            str = "";
            return;
        }
        
        if (n!=0){
            string s1 = str;
            s1.push_back('(');
            addingpar(v, s1, n-1, m);
        }
        
        if(m>n){
            string s2 = str;
            s2.push_back(')');
            addingpar(v, s2, n, m-1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int m = n;
        //addingpar(v, "", n, 0);// for 1st method
        //addingpar(v, "", n, m); //for 2nd method
        addingpar(v, "", n, m); // for 3rd method
        
        return v;
    }
   
};
