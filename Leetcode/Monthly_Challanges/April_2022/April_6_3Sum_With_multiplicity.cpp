class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
       // 3Sum Extension 
        int count =0;
        int mod   =(int)1e9+7; 
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++){
            int currT = target- arr[i];
            int low  = i+1;
            int high = arr.size()-1;
            while(low<high){
                int lc=1,rc=1;
                
                if (arr[low]+arr[high]<currT){
                    // need to increase low 
                    low++;
                    
                }
                else if (arr[low]+arr[high]>currT){
                    high--;
                }
                else if(arr[low]!=arr[high]){
                    // calculate the duplicate of low and duplicate of right 
                    while(low+1 <high && arr[low+1]==arr[low]){
                        low++;
                        lc++;
                    }
                    while(low < high-1  && arr[high-1]==arr[high]){
                        high--;
                        rc++;
                    }
                    low++;
                    high--;
                    count =  count + (lc*rc);
                    count = count % mod;
                }
                else{
                    // case when your low to high all have same elemens NC2.
                    count = count +  ((high - low+1)*(high-low))/2;
                    count = count % mod;
                    break;                        
                }
            
            }
        }
        return count;
    }
};