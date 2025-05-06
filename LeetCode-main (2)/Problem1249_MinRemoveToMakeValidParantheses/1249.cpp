
class Solution {
    public:
        string minRemoveToMakeValid(string s) {
            stack<int> index;
            string validString;
    
            int size = s.size();
    
            for(int i = 0; i < size ; ++i)
            {
                if(s[i] == '(')
                    index.push(i);
    
                if(s[i] == ')'){
                    if(!index.empty())
                        index.pop();
                    else
                        s[i] = '#';
                }
            }
    
            while(!index.empty()){
                s[index.top()] = '#';
                index.pop();
            }
    
            for(auto c: s){
                if(c != '#')
                    validString.push_back(c);
            }
    
            return validString;
        }
    };