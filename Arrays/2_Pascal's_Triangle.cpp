class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i = 0; i < numRows; i++) {

            // Resizing each vector
            ans[i].resize(i+1);

            // Making first and last equals 1
            ans[i][0] = ans[i][i] = 1;

            // Traversing algo
            for(int j = 1; j < i; j++) 
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
        return ans;
    }
};

// TC :- O(numRows^2) SC :- O(numRows^2)