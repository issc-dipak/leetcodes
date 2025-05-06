class Solution {
    public:
        string reverseWords(string s) {
            int n = s.size();
            int i = 0;
            string reverse;
            while(i < n)
            {
                while(i < n && s[i] == ' ')
                    i++;
                    if(i >= n) break;
                int j = i + 1;
                while(j < n && s[j] != ' ')
                    j++;
                string w = s.substr(i,j-i);
                if(reverse.empty())
                    reverse = w;
                else
                    reverse = w + ' ' + reverse;
                i = j + 1;
            }
            return reverse;
        }
    };