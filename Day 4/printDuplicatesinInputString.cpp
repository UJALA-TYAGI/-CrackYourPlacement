#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
        map<char, int> printDups(string str)
        {
        	map<char, int> count;
        	for (int i = 0; i < str.size(); i++) {
        		count[str[i]]++;
        	}
            
            return count;
        }
};

/* Driver code*/
int main()
{
	string str;
	cin>>str;
	solution obj;
	map<char, int> mp;
	mp = obj.printDups(str);
	
	for(auto x: mp){
	    if(x.second>1)
	    {
	        cout<<x.first<<" "<<x.second<<endl;   
	    }
	}
	
	return 0;
}
