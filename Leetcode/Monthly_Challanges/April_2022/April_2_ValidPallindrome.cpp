class Solution {
public:
    bool isPalindrome(string s,int l,int h){
        int low=l,high=h;
        while(low<=high){
            if(s[low]==s[high]){
                low++;
                high--;
            }
            else{
                return false;
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low = 0,high = s.size()-1;
        while(low<=high){
            if(s[low]==s[high]){
                low++;
                high--;                
            }
            else{
                // mismatch point 
                // check low to high -1 removing high  and also by removing low 
                if(isPalindrome(s,low,high-1) || isPalindrome(s,low+1,high)){
                    return true;
                }
                else{
                    return false;
                }
            }
            
        }
        return true;
    }
};