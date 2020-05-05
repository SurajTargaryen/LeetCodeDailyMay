// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n;
        while(start <end)
        {
            int mid= start + ((end-start)/2);
            if(isBadVersion(mid))
                end = mid;
            else
                start = mid;
            
            if(start == end-1)
            {
                if(isBadVersion(start))
                    return start;
                else
                    return end;
            }
        }
        return start;        
    }
};