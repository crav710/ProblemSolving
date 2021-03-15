/*

A,B,C 
You move N-1th disc to B using C as Auxilary 
Then you move N th Disc From A to C . 
Now you Move N-1 Disc From B to C using A as Auxilary. 
T(n)  =2T(n-1)+1

*/
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux)
    {
        if(N==1)
        {
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        }
        int sum = toh(N-1,from,aux,to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        sum++;
        return sum + toh(N-1,aux,to,from);
        
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        moves = ob.toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends