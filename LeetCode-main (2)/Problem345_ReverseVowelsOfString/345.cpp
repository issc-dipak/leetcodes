class Solution {
    public:
        string reverseVowels(string s) {
            stack<char> rS;
            for(auto c :s)
            {
                if(c == 'A' || c == 'a' || c =='I' || c == 'i' || c == 'E'|| c == 'e' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
                    rS.push(c);
                }
            }
            
            string reverseS;
            for(auto c :s)
            {
                if(c == 'A' || c == 'a' || c =='I' || c == 'i' || c == 'E'|| c == 'e' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
                    reverseS.push_back(rS.top());
                    rS.pop();
                }
                else
                {
                    reverseS.push_back(c);
                }
            }
    
            return reverseS;
    
        }
    };