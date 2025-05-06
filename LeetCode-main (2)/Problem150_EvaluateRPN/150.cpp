#include<string>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> eval;
        for(auto t : tokens)
        {
            if(t == "+" || t == "-" || t == "*" || t == "/")
            {
                if(eval.size() >= 2)
                {
                    int right = eval.top();
                    eval.pop();
                    int left = eval.top();
                    eval.pop();
                        if(t == "+"){
                            eval.push(left+right);
                        }else if(t == "-"){
                            eval.push(left-right);
                        }else if(t == "*"){
                            eval.push(left*right);
                        }else if( t == "/"){
                             eval.push(left/right);
                        }
                            
                }

            }else{
                
                eval.push(stoi(t));
            }
                
        }
            return eval.top();
    }

        
    
};
