// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        bool flag = false;
        int low = 1;
        int high = n;
        int ans = 0;
        if(n==1)
            return 1;
        
        while(low<high)
        {
            
            int  mid = low+(high-low)/2;
            if(isBadVersion(mid))
            {
                ans = low;
                high = mid;
            }
            else
            {
                low = mid+1;
            }
        }
        return low ;
    }
};