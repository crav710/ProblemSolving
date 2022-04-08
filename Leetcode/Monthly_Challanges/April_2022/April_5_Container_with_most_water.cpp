class Solution {
public:
    int maxArea(vector<int>& height) {
        // greedily converge on all points and check if you get the largest area. 
        // if there is a scope of improvement by try high verticle line check it. check till low cross high
        int low = 0,high = height.size()-1;
        int maxA = 0;
        while(low<high){
            int lV     = height[low];
            int rV     = height[high];
            int currA  = (high-low)*min(rV,lV);
            maxA       = max(maxA,currA);
            // check if the low verticle line is low then look for higher or else decrese high is low is big 
            if(height[low]<=height[high]){
                low++;
            }
            else{
                high--;                
            }            
        }
        return maxA;
    }
};