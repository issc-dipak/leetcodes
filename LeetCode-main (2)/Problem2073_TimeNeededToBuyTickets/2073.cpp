class Solution {
    public:
        int timeRequiredToBuy(vector<int>& tickets, int k) {
            queue<int> q;
            int lSize = tickets.size();
    
            for(int i =0 ; i < lSize;++i)
                q.push(i);
            
            int time = 0;
            while(!q.empty())
            {
                int i = q.front();
                tickets[i]--;
                time++;
                  q.pop();
    
                if(tickets[i] > 0)
                    q.push(i);
                
                if(tickets[k] == 0)
                    break;               
            }
            return time;
        }
    };