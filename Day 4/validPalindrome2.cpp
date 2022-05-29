class Solution {
public:
    
    bool isPalin(string &s, int i, int j)
        {
            while (i <= j)
            {
                if (s[i] != s[j]) return false;
                i++, j--;
            }
            return true;
        }

    bool validPalindrome(string s)
    {
        int n = s.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j]) return isPalin(s, i + 1, j) || isPalin(s, i, j - 1);
            i++, j--;
        }
        return true;
    }
//     bool validPalindrome(string s) {
//         int i=0;
//         int j=s.length()-1;

//         while(i<=j && s[i]==s[j])
//             i++,j--;


//         if(i>j)
//             return true;

//         int i1=i;
//         int j1=j;

//         i++;

//         while(i<=j&&s[i]==s[j])
//             i++,j--;

//         if(i>j)
//             return true;


//         i=i1;
//         j=j1-1;

//         while(i<=j&&s[i]==s[j])
//             i++,j--;


//         if(i>j)
//             return true;       

//         return false;
//     } 
};
