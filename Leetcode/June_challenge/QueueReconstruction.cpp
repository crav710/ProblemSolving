/*


Algorithm:


we sort the array by increasing order of heights and decreasing order of k(number of persons ahead of queue and bigger or equal)

the basic intution here is let's say you have k same for two persons so we would pick the person which has smaller height for example [2 0] [5 0] [7 0]

after sorting 

7 0
5 0
2 0

then add into the array with index as k 
ans array :

            7 0         5 0     2 0
                        7 0     5 0
                                7 0

*/
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {
        
        auto cmp = [](const vector<int>& lhs, const vector<int>& rhs) 
        {
            if(lhs[0]==rhs[0])
            {
                return lhs[1]>rhs[1];
            }
            else
            {
                return lhs[0]<rhs[0];
                
            }
        };   
        
        sort(people.begin(),people.end(),cmp);
        vector<vector<int>> ans;
        for(int i=people.size()-1;i>=0;i--)
        {
            int index=people[i][1];
            // cout<<index<<endl;
            ans.insert(ans.begin()+index,people[i]);            
        }
        
        return ans;
    }
};