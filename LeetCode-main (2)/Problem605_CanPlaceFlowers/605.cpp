class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int count = 0;
        bool right,left;
        if(size== 1){
            if(flowerbed[0] == 0){
                flowerbed[0] = 1;
                count++;
            }

        }
        else{
        for(int i = 0 ; i<size;++i)
        {
            if(flowerbed[i] == 0)
            {
                right = left = false;
                if(i == 0){
                    left = true;
                    right = flowerbed[i+1] == 0 ? true : false;
                }
                else if( i == size-1){
                    right = true;
                    left = flowerbed[i-1] == 0 ? true : false;
                }
                else {
                    right = flowerbed[i+1] == 0 ? true : false;
                    left = flowerbed[i-1] == 0 ? true : false;
                }

                if(right && left){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        }

        return count>=n;
        
    }
};