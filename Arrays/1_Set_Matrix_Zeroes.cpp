class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool vertical_zero = false;
        bool horizontal_zero = false;

        // Checking if any element 0 in 1st col
        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0)
                vertical_zero = true;
        } 

        // Checking if any element 0 in 1st row
        for(int i = 0; i < n; i++) {
            if(matrix[0][i] == 0)
                horizontal_zero = true;
        }

        // Now lets check from the next row and col i.e from (1, 1) and make element 0 if its extremes row or col is 0
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
                    
            }
        }
        // Just opposite of above
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        // Now if any 0 in vertical_zero or horizontal_zero
        if(vertical_zero == true) {
            for(int i = 0; i < m; i++) 
                matrix[i][0] = 0;
        }
        if(horizontal_zero == true) {
            for(int i = 0; i < n; i++) 
                matrix[0][i] = 0;
        }
    }
};

// TC :- m*n , SC :- O(1)