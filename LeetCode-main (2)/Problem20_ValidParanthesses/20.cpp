class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;
        for(auto e : s)
        {
            if(e == '(' || e == '{' || e == '[')
            {
                parentheses.push(e);
            }
            else 
            {
                if(!parentheses.empty()){
                     if(( e == ')' && parentheses.top() == '(') || ( e == ']' && parentheses.top() == '[') || ( e == '}' && parentheses.top() == '{')){
                    parentheses.pop();
                }else{return false;}
                }else{return false;}
               
            }
        }

        return parentheses.empty();
    }
};