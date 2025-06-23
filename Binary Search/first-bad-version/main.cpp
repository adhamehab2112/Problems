// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int st=1 , end = n , mid,curr=-1;
        while(st<=end)
        {
            mid = (st+end)/2;
            if(!isBadVersion(mid)) st=mid+1;
            else{
                end=mid-1;
                curr = mid;
            }
        }
        return curr;
        
    }
};