/*

w=[1,2,3]
w_sum=[1,3,6]

weighted random probablity 

prob of getting index 0 1/(1+2+3)
prob of getting index 1 2/(1+2+3)
prob of getting index 2 3/(1+2+3)

RandomFunc = (rand()/RAND_MAX)*6 or rand()%6

find the index in w_sum array. 


*/

class Solution {
public:
    vector<int> w_sum;
    Solution(vector<int>& w) {
        int sum=0;
        for(int i =0; i<w.size();i++)
        {
            sum+=w[i];
            w_sum.push_back(sum);          
        }
    }
    
    int pickIndex() {
//        cout<<w_sum.back()<<endl;
        int randNum= rand()%w_sum.back();
        /*
        linear search 
        int index=0;
        for(int i =0; i<w_sum.size();i++)
        {
            if(randNum<=w_sum[i])
            {
                index=i;
                break;
            }
            
        }
        */
//         binary search 
        auto it=upper_bound(w_sum.begin(),w_sum.end(),randNum);
        
        return it-w_sum.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */