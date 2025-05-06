class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int max = 0;
      int new_max;
      for(int i = 0 ; i < gain.size();++i){
            new_max += gain[i];
            if(new_max>max){
                max = new_max;
            }
      }  
        return max;
    }
};