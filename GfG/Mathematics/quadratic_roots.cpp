// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) 
    {
        double D = b*b - 4*a*c;
        double root1,root2;
        vector<int> result;
        if(D<0)
        {
            result.push_back(-1);
        }
        else{
            root1= floor((-1*b + sqrt(D))/(2*a));
            root2= floor((-1*b - sqrt(D))/(2*a));
            if(root1>root2)
            {
                result.push_back(root1);
                result.push_back(root2);
            }
            else{
                result.push_back(root2);
                result.push_back(root1);
            }
        }
        return result;

    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends