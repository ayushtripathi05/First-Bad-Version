// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //improve variable names
        int s=1;
        
        int e=n;
        
        int ans=1;
        
        while(s<=e)
        {
            int mid=(s-e)/2+e;
            
            if(isBadVersion(mid))
            {
                ans=mid;
                
                e=mid-1;
                
            }
            else
            {
                s=mid+1;
            }
            
            
            
        }
        
        return ans;
    }
};
