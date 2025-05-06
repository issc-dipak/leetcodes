class Solution {
    public:
        int calPoints(vector<string>& operations) {
            stack<int> points;
            int totalPoints = 0;
            for (auto s : operations) {
                if (s == "+") {
                    if (points.size() >= 2) {
                        int left = points.top();
                        points.pop();
                        int right = points.top();
                        points.pop();
                        points.push(right);
                        points.push(left);
                        points.push(left + right);
                    }
    
                } else if (s == "D") {
                    points.push(points.top() * 2);
                    
                } else if (s == "C") {
                    points.pop();
                } else {
                    points.push(stoi(s));
                }
            }
    
            while(!points.empty()){
                totalPoints += points.top();
                points.pop();
            }
    
            return totalPoints;
        }
    };