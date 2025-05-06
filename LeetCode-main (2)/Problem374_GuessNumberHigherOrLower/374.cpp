/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int begin = 1;

        int mid = 0;
        while(begin<=n)
        {
            mid = begin + (n-begin) /2;
            if(guess(mid) == -1)
                 n = mid - 1;
            else if (guess(mid) == 1)
               begin = mid + 1;
            else
                 break;
        }
        return mid;
        
    }
};
