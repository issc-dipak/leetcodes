class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(auto e : s)
        {
            if(e != 'c')
            {
                t.push(e);
            }
            else
            {
                if(t.size() >= 2){
                    if(t.top() == 'b') t.pop(); else return false;
                     if(t.top() == 'a') t.pop(); else return false;
                }else return false;
            }
        }

        return t.empty();
        
    }
};
