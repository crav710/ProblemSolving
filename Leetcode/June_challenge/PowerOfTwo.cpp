"""

Simply compute the num of set bits 

7&6
111&110

this operation reduces the 1 from the current n. 

: n=n&(n-1)


"""


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return false;
        }
        int setBits=0;
        while(n){
            setBits++;
            n=n&(n-1);
        }
        return setBits==1;
    }
};