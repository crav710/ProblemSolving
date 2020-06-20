"""
You can assume that

0 <= amount <= 5000
1 <= coin <= 5000
the number of coins is less than 500
the answer is guaranteed to fit into signed 32-bit integer


Dynamic Programming Algorithm:

recursive tree 
Here S is set of coins and m is size and n is the amount we want to reach:

Recursive function = func(S,m-1,n)+func(S,m,n-S[m-1])


                            C({1,2,3}, 5)                     
                           /             \    
                         /                 \                  
             C({1,2,3}, 2)                 C({1,2}, 5)
            /       \                      /      \         
           /         \                    /         \   
C({1,2,3}, -1)  C({1,2}, 2)        C({1,2}, 3)    C({1}, 5)
               /    \             /     \           /     \
             /       \           /       \         /        \
    C({1,2},0)  C({1},2)   C({1,2},1) C({1},3)    C({1}, 4)  C({}, 5)
                   / \     / \        /\         /     \         
                  /   \   /   \     /   \       /       \  
                .      .  .     .   .     .   C({1}, 3) C({}, 4)
                                               / \ 
                                              /   \   
                                             .      .


we can see here that problems are repeating  C({1},3) 



numways[j]=numways[j-coins[i]]+numways[j];                            

here we are storing the subproblems in numways[j] we can simply utilise that and have our results in O(mn) time and O(m) space. 

"""
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> numways;
        for(int i=0;i<=amount;i++){
            numways.push_back(0);
        }
        numways[0]=1;
        //cout<<numways.size()<<endl;
        for(int i=0 ; i <coins.size();i++)
        {
            for(int j=0;j<numways.size();j++)
            {
                if(coins[i]<=j)
                {
                    numways[j]=numways[j-coins[i]]+numways[j];                            
                }
            }
            
        }
        return numways[amount];        
    }
};